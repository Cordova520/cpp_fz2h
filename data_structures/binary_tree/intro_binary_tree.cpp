#include<iostream>
#include"binary_tree_class.cpp"

int main(){
    BTNode<int>* root = new BTNode<int>(1); // New root node
    BTNode<int>* node_1 = new BTNode<int>(2); ///New separate nodes
    BTNode<int>* node_2 = new BTNode<int>(3);

    root->left = node_1; //This assigns node one to the left of root
    root->right = node_2; //This assigns node two to the right of root

    std::cout << "The root of the tree is: " << root->data << std::endl;
    std::cout << "                       /   "<< "|" << std::endl;
    std::cout << "On its sides are:     " << node_1->data << "    " << node_2->data << std::endl;

    return 0;
}