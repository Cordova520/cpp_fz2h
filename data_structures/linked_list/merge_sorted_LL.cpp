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

Node* mergedList(Node* head_1, Node* head_2){
    if (head_1 == NULL) return head_2;
    if (head_2 == NULL) return head_1;
    Node* final_head = NULL; //Head of the list to return

    if (head_1->data < head_2->data){
        final_head = head_1;
        head_1 = head_1->next;
    }else{
        final_head = head_2;
        head_2 = head_2->next;
    }
    Node* final_tail = final_head;//Pointer to form new list

    while (head_1 && head_2)
    {
        if (head_1->data < head_2->data){
            final_tail->next = head_1;
            head_1 = head_1->next;
        }else{
            final_tail->next = head_2;
            head_2 = head_2->next;
        }
        final_tail = final_tail->next;
    }
    if (head_1){
        final_tail->next = head_1;
    }else{
        final_tail->next = head_2;
    }
    return final_head;
}

int main(){
    Node *head_1 = take_input();
    Node *head_2 = take_input();
    Node *final_list = mergedList(head_1, head_2);
    std::cout << std::endl;
    print(final_list);
    std::cout << std::endl;
    return 0;
}