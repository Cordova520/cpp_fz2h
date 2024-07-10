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

Node* reverseList(Node*head){
    Node* current = head;
    Node* prev = NULL;

    while (current != NULL){
        Node* next_node = current->next;
        current->next = prev;

        prev = current;
        current = next_node;
    }

    return prev;
}

int main(){
    Node *head = take_input();
    int data;
    std::cout << std::endl;
    Node* reverse = reverseList(head);
    print(reverse);
    std::cout << std::endl;
    return 0;
}