#include<iostream>
#include<vector>
#include "TreeNode_class.cpp"

void printTree(TreeNode<int>* root);


int main(){
    TreeNode<int>* root = new TreeNode<int>(1);
    TreeNode<int>* node_1 = new TreeNode<int>(2);
    TreeNode<int>* node_2 = new TreeNode<int>(3);
    root->children.push_back(node_1);
    root->children.push_back(node_2);

    printTree(root);
    return 0;
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