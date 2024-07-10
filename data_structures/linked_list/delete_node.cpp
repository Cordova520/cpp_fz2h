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

void printElement(Node *head, int request){
    ///int len = length(head);//approach 1
    if (request < 0 /*|| request > len-1//aproach 1*/)
    {
        std::cout << "invalid index";
        return;
    }else{
        int count = 1;
        while (count <= request && head!=NULL/*approach 2*/)
        {
            head = head->next;
            count ++;
        }
        if (head!=NULL) //2nd approach, check for head not to be null, otherwise we'll get runtime error
        {
            std::cout << head->data;
        }else{
            std::cout << "invalid index";
            return;
        }
    }
}

Node* deleteNode(Node*head, int position){
    int counter = 1;
    Node *copyHead = head;
    if (position < 0)
    {
        std::cout << "invalid index";
        std::cout << std::endl;
        return head;
    }else if (position == 0)
    {
        Node *newHead = head->next;
        // head = newHead; this causes memory leaking
        head->next = NULL; //This doesn't since by doing this you can isolate the node and then delete it from memory
        delete head;
        return newHead;
    }else{
        while (counter <= position-1 && head!=NULL/*approach 2*/)
        {
            head = head->next;
            counter++;
        }
        if (head!=NULL) //2nd approach, check for head not to be null, otherwise we'll get runtime error
        {
            Node *newHead = head->next; //The new head is going to be the address of the next node
            head->next = newHead->next; //The next Node is now going to be the next of the new head
            newHead->next = NULL; //isolation of the old Node
            delete newHead; //Delete isolated node
            return copyHead;
        }else{
            std::cout << "invalid index ";
            std::cout << std::endl;
            return copyHead;
        }
    }
}

int main(){
    Node *head = take_input();
    int index;
    std::cout << "What index would you like to delete? " << std::endl;
    std::cin >> index;
    // int data = 100;
    head = deleteNode(head, index);
    print(head);
    std::cout << std::endl;
    std::cout << "The " << index << "th " << "element of the list is: ";
    printElement(head, index);
    std::cout << std::endl;
    return 0;
}