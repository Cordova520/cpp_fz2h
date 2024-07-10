#include<iostream>
#include"binary_tree_class.cpp"

void print_tree(BTNode<int>* root);

int main(){
    BTNode<int>* root = new BTNode<int>(1); // New root node
    BTNode<int>* node_1 = new BTNode<int>(2); ///New separate nodes
    BTNode<int>* node_2 = new BTNode<int>(3);

    root->left = node_1; //This assigns node one to the left of root
    root->right = node_2; //This assigns node two to the right of root
    print_tree(root);
    return 0;
}

void print_tree(BTNode<int>* root){
    if (root==NULL) return; //base case
    
    std::cout << root->data << ":";
    if (root->left!=NULL){
        std::cout << "L" << root->left->data;
    }
    if (root->right!=NULL){
        std::cout << ",R" << root->right->data;
    }
    std::cout << std::endl;
    print_tree(root->left);
    print_tree(root->right);
}