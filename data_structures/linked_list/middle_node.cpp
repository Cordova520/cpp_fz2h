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

Node* middleNode(Node*head){
    Node* slow = head;
    Node* fast = head->next;
    while (fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    if (fast){ //Even
        return slow->next;
    };
    return slow; //Odd
}

int main(){
    Node *head = take_input();
    int data;
    std::cout << std::endl;
    Node* middle = middleNode(head);
    std::cout << "The middle node is: " << middle->data << std::endl;
    std::cout << std::endl;
    return 0;
}