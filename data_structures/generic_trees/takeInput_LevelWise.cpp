#include<iostream>
#include<vector>
#include<queue>
#include "TreeNode_class.cpp"

TreeNode<int>* takeInput();
void printTree(TreeNode<int>* root);

int main(){
    TreeNode<int>* input = takeInput();
    printTree(input);
    return 0;
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

void printTree(TreeNode<int>* root){
    if (root==NULL)return;
    
    std::cout << root->data << ": ";
    for (int jdx = 0; jdx < root->children.size(); jdx++){
        std::cout << root->children[jdx]->data << " ,";
    }
    std::cout << std::endl;
    for (int idx = 0; idx < root->children.size(); idx++){
        printTree(root->children[idx]);
    }
}