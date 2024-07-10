#include<iostream>
#include<vector>
#include<queue>
#include "TreeNode_class.cpp"

void printDepth(TreeNode<int>* root, int depth);
TreeNode<int>* takeInput();
void levelOrderPrint(TreeNode<int>* root);

int main(){
    TreeNode<int>* input = takeInput();
    levelOrderPrint(input);
    printDepth(input, 2);
    return 0;
}

void printDepth(TreeNode<int>* root, int depth){
    if (depth==0){
        std::cout << root->data << std::endl;
        return ;
    }else if (root==NULL){
        return;
    }
    
    for (int idx = 0; idx < root->children.size(); idx++){
        printDepth(root->children[idx], depth-1);
    }  
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