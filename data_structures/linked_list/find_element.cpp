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

bool isPresent(Node *head, int data){
    Node *temp = head;
    while (temp != NULL){
        if (temp->data == data){
            return true;
        }else{
            temp = temp->next;
        }
    }
    return false;
}

int main(){
    Node *head = take_input();
    int data;
    print(head);
    std::cout << std::endl;
    std::cout << "What number are you looking for? " << std::endl;
    std::cin >> data;
    if(isPresent(head, data)){
        std::cout << "The number you seek is inside the array.\n";
    }else if (! isPresent(head, data)){
        std::cout << "The number you seek is not present.\n";
    }
    std::cout << std::endl;
    return 0;
}