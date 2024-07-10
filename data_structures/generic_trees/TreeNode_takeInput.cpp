#include<iostream>
#include<vector>
#include "TreeNode_class.cpp"

void printTree(TreeNode<int>* root);
TreeNode<int>* takeInput();

int main(){
    TreeNode<int>* input = takeInput();
    printTree(input);
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

TreeNode<int>* takeInput(){
    int rootData;
    std::cout << "Enter data: \n";
    std::cin >> rootData;
    TreeNode<int> * root = new TreeNode<int>(rootData);
    int children;
    std::cout<< "How many childre will " << rootData << " have? \n";
    std::cin >>  children;
    for (int idx = 1; idx <= children; idx++){
        TreeNode<int>* child = takeInput();
        root->children.push_back(child);
    }

    return root;
}