#include<iostream>
#include<vector>
#include<queue>
#include "TreeNode_class.cpp"

int height(TreeNode<int>* root);
TreeNode<int>* takeInput();
void levelOrderPrint(TreeNode<int>* root);

int main(){
    TreeNode<int>* input = takeInput();
    levelOrderPrint(input);
    std::cout << "This tree has a height of: " << height(input) << std::endl;
    return 0;
}

int height(TreeNode<int>* root){
    if (root==NULL) return 0;
    
    int ans = 0;
    for (int idx = 0; idx < root->children.size(); idx++){
        int childHeight = height(root->children[idx]);
        if (childHeight > ans){
            ans = childHeight;
        }
    }

    return ans + 1;
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