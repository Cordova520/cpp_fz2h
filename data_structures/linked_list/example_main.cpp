#include<iostream>
#include "linked_list_class.cpp"

int main(){
    //Statically
    Node node_1(1);
    Node node_2(2);
    node_1.next = &node_2;
    std::cout << node_1.data << " " << node_2.data << std::endl;

    Node *head = &node_1;
    std::cout << head -> data << std::endl;

    ///Dynamically
    Node *node_3 = new Node(3);
    Node *node_4 = new Node(4);
    node_3 -> next = node_4;
    return 0;
}