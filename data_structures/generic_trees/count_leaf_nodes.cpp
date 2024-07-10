#include<iostream>
#include<vector>
#include<queue>
#include "TreeNode_class.cpp"

int countLeafNodes(TreeNode<int>* root);
TreeNode<int>* takeInput();
void levelOrderPrint(TreeNode<int>* root);


// 1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0
int main(){
    TreeNode<int>* input = takeInput();
    levelOrderPrint(input);
    std::cout << "The number of leaves in this tree is: " << countLeafNodes(input) << std::endl;
    return 0;
}

int countLeafNodes(TreeNode<int>* root){
    if (root->children.size()== 0) return 1;
    int ans = 0;
    for (int idx = 0; idx < root->children.size(); idx++){
        ans += countLeafNodes(root->children[idx]);
    }
    return ans;
}

TreeNode<int>* takeInput(){
    int rootData;
    std::cout << "Enter root data: \n";
    std::cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    std::queue<TreeNode<int>*> storage;
    storage.push(root);
    while (!storage.empty()){
        TreeNode<int>*  children = storage.front();
        storage.pop();
        std::cout << "Enter the number of children of " << children->data << std::endl;
        int number;
        std::cin >> number;
        for (int idx = 1; idx<=number; idx++){
            int childData;
            std::cout << "Enter the " << idx << "th child of " << children->data << std::endl;
            std::cin >> childData;

            TreeNode<int>* node = new TreeNode<int>(childData);
            storage.push(node);
            children->children.push_back(node);
        }
        
    }
    return root;
}

void levelOrderPrint(TreeNode<int>* root){
    std::queue<TreeNode<int>*> storage;
    storage.push(root);
    while (!storage.empty()){
        TreeNode<int>*  children = storage.front();
        storage.pop();
        
        std::cout << children->data << ": ";
        for (int idx = 0; idx<children->children.size(); idx++){
            std::cout << children->children[idx]->data << " ,";
        }
        std::cout << std::endl;

        for (int jdx = 0; jdx<children->children.size(); jdx++){
            storage.push(children->children[jdx]);
        }
    }
}