#include <iostream>
#include "linked_list_class.cpp"

void print(Node *head){
    while (head != NULL)
    {
        std::cout << head->data << " ";
        head = head->next;
    }
}

int main(){
    ///Stataically
    Node node_1(1);
    Node node_2(2);
    Node node_3(3);
    Node node_4(4);
    Node node_5(5);

    Node *head = &node_1;

    head->next = &node_2;
    node_2.next = &node_3;
    node_3.next = &node_4;
    node_4.next = &node_5;

    print(head);

    std::cout << std::endl;

    return 0;
}