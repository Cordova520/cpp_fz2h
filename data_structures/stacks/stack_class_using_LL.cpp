#include<iostream>

template<typename var>

class Node
{
public:
    var data;
    Node<var> *next;
    Node(var data);
};

template<typename var>
Node<var>::Node(var data){
    this -> data = data;
    next = NULL;
}

template<typename var>
class Stack
{
private:
    Node<var> *head;
    int size;
public:
    Stack();
    int getSize();
    bool isEmpty();
    void push(var);
    void pop();
    var top();
};

template<typename var>
Stack<var>::Stack(){
    head = NULL;
    size = 0;
}

template<typename var>
int Stack<var>::getSize(){
    return size;
}

template<typename var>
bool Stack<var>::isEmpty(){
    return size == 0 ? true: false;
}

template<typename var>
void Stack<var>::push(var element){
    Node<var> *current_node = new Node<var>(element);
    current_node->next = head;
    head = current_node;
    size++;
}

template<typename var>
void Stack<var>::pop(){
    if (isEmpty()){
        return;   
    }
    Node<var> *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
    size--;
}

template<typename var>
var Stack<var>::top(){
    if (isEmpty()){
        std::cout << "Your stack is empty" << std::endl;
        return 0;   
    }
    return head->data;
}





