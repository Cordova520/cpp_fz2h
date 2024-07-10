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
    int elements = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        elements += 1;
        temp = temp->next;
    }
    return elements;
}

Node* merged2List(Node* head_1, Node* head_2){
    if (head_1 == NULL) return head_2;
    if (head_2 == NULL) return head_1;
    Node* final_head = NULL; //Head of the list to return

    if (head_1->data < head_2->data){
        final_head = head_1;
        final_head->next = merged2List(head_1->next, head_2);
    }else{
        final_head = head_2;
        final_head->next = merged2List(head_1, head_2->next);
    }
    return final_head;
}

Node* mergedList(Node* head){
    if (head == NULL || head->next == NULL) return head;
    //Break list into two halves
    Node* slow = head;
    Node* fast = head->next;
    while (fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    
    Node* middle = slow->next;
    slow->next = NULL;
    ///Recursion
    Node* head_1 = mergedList(head);
    Node* head_2 = mergedList(middle);
    ///Merge sorted lists
    Node *final_head = merged2List(head, middle);
    return final_head;
}

int main(){
    Node *list= take_input();
    Node *final_list = mergedList(list);
    std::cout << std::endl;
    print(final_list);
    std::cout << std::endl;
    return 0;
}