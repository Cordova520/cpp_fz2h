#include<iostream>
#include<queue>
#include"binary_tree_class.cpp"

BTNode<int>* takeInput();
void print_tree(BTNode<int>* root);

int main(){
    //Test tree: 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
    BTNode<int>* root = takeInput();
    print_tree(root);
    return 0;
}

BTNode<int>* takeInput(){
    int root_data;
    std::cout << "Enter root data: \n";
    std::cin >> root_data;
    BTNode<int>* root = new BTNode<int>(root_data);
    std::queue<BTNode<int>*> line;
    line.push(root);
    while (!line.empty()){
        BTNode<int>* front = line.front();
        line.pop();
        int left_child_data;
        std::cout << "Enter the left child of: "<< front->data << std::endl;
        std::cin >> left_child_data;
        if (left_child_data != -1){
            BTNode<int>* left_node = new BTNode<int>(left_child_data);
            line.push(left_node);
            front->left = left_node;
        }
        int right_child_data;
        std::cout << "Enter the right child of: "<< front->data << std::endl;
        std::cin >> right_child_data;
        if (right_child_data != -1)
        {
            BTNode<int>* right_node = new BTNode<int>(right_child_data);
            line.push(right_node);
            front->right = right_node;
        }
    }

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
