#include<iostream>

template<typename var>
class Queue
{

public:
    var *array;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;
    Queue();
    Queue(int capacity);
    int getSize();
    bool isEmpty();
    void push(var element);
    var front();
    void pop();
};

template<typename var>
Queue<var>::Queue(){
    capacity = 5;
    array = new var[capacity];
    nextIndex = 0;
    firstIndex = (firstIndex+1) % capacity;
    size = 0;
}

template<typename var>
Queue<var>::Queue(int cap){
    capacity = cap;
    array = new var(capacity);
    nextIndex = 0;
    firstIndex = -1;
    size = 0;
}

template<typename var>
int Queue<var>::getSize(){
    return size;
}

template<typename var>
bool Queue<var>::isEmpty(){
    return size == 0 ? true: false;
}

template<typename var>
void Queue<var>::push(var element){
    if (size == capacity){
        var *newArray = new var[2*capacity];
        int aux = 0;
        for (int idx = firstIndex; idx < capacity; idx++){
            newArray[aux] = array[idx];
            aux++;
        }
        for (int idx = 0; idx < firstIndex; idx++){
            newArray[aux] = array[idx];
            aux++;
        } 
        firstIndex = 0;
        nextIndex = capacity;
        capacity = capacity*2;
        delete []array;
        array = newArray;
    }
    array[nextIndex] = element;
    nextIndex = (nextIndex + 1)% capacity;
    if (firstIndex == -1){
        firstIndex = 0;
    }
    size++;
}

template<typename var>
var Queue<var>::front(){
    if (isEmpty()){
        std::cout << "Queue Empty\n";
        return 0;
    }else{
        return array[firstIndex];
    }
}

template<typename var>
void Queue<var>::pop(){
    if (isEmpty()){
        std::cout << "Queue is Empty\n";
        return;
    }else{
        firstIndex =(firstIndex + 1)%capacity;
        size--;
    }
}
