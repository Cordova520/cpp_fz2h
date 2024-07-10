#include<iostream>
#include"binary_tree_class.cpp"

BTNode<int>* takeInput();
void print_tree(BTNode<int>* root);

int main(){
    BTNode<int>* root = takeInput();
    print_tree(root);
    return 0;
}

BTNode<int>* takeInput(){
    int root_data;
    std::cout << "Enter data: \n";
    std::cin >> root_data;
    if (root_data==-1) return NULL;
    
    BTNode<int>* root = new BTNode<int>(root_data);
    BTNode<int>* left_child = takeInput();
    BTNode<int>* right_child = takeInput();

    root->left = left_child; 
    root->right = right_child; 

    return root;
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