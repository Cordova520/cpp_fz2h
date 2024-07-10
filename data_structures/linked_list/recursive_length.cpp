#include<iostream>
#include "linked_list_class.cpp"

void print(Node *head){
    while (head != NULL)
    {
        std::cout << head->data << " ";
        head = head->next;
    }
}

Node* take_input(){
    int data;
    std::cin >> data;
    Node *head = NULL; //Linked List is empty
    Node *tail = NULL; ///Linked List is empty
    while (data != -1)
    {
        //Created Linked List
        Node *current_node = new Node(data);
        /// 1st node
        if (head == NULL)
        {
            head = current_node;
            tail = current_node;
        }else{
            tail->next = current_node;///Inserting at tail
            tail = current_node; ///Trasnforming new node into the new tail
            //head->next = current_node;///Inserting at head
            //head = current_node; ///Trasnforming new node into the new head
        }
        
        std::cin >> data;
    }
    return head;
}

int length(Node *head){
    if (head == NULL){
        return 0;
    }
    int smallAns = length(head->next);
    return 1 + smallAns;
}

int main(){
    Node *head = take_input();
    std::cout << "The list has a length of: " << length(head) << std::endl;
    print(head);
    std::cout << std::endl;
    return 0;
}