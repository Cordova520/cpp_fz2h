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
class Queue
{

public:
    Node<var>* head;
    Node<var>* tail;
    int size;
    Queue();
    int getSize();
    bool isEmpty();
    void push(var data);
    var front();
    void pop();
};

template<typename var>
Queue<var>::Queue(){
    head = NULL;
    tail = NULL;
    size = 0;
}

template<typename var>
int Queue<var>::getSize(){
    return size;
}

template<typename var>
bool Queue<var>::isEmpty(){
    return size == 0;
}

template<typename var>
void Queue<var>::push(var data){
    Node<var>* newNode = new Node<var>(data);
    if(isEmpty()){
        head = newNode;
        tail = newNode;
        size++;
    }else{
        tail->next = newNode;
        tail = newNode;
        size++;
    }
}

template<typename var>
var Queue<var>::front(){
    if (isEmpty()){
        std::cout << "Queue is Empty\n";
        return 0;
    }else return head->data;
}

template<typename var>
void Queue<var>::pop(){
    if (isEmpty()){
        std::cout << "Queue is Empty\n";
        return ;
    }else{
        Node<var>* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        size--;
    }
}
