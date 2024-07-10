#include<iostream>

//Using templates
template <typename var>
class Stack
{
private:
    var *array;
    int nextIndex;
    int capacity;
public:
    Stack();
    // Stack(int capacity);
    int Size();
    bool isEmpty();
    void push(var element);
    void pop();
    var top();
};

template<typename var> 
Stack<var>::Stack()
{
    capacity = 4;
    array = new var[capacity];
    nextIndex = 0;
}

//Parametrized Constructor
// Stack::Stack(int cap){
//     capacity = cap;
//     array = new int[capacity];
//     nextIndex = 0;
// }

//Return number of elements inside the stack
template<typename var> 
int Stack<var>::Size(){
    return nextIndex;
}

//Return if stack is empty
template<typename var> 
bool Stack<var>::isEmpty(){
    return nextIndex == 0 ? true: false;
}

//Push an element into our stack
template<typename var> 
void Stack<var>::push(var element){
    if (nextIndex == capacity){ ///Stack is full
        var * newArray = new var[capacity*2]; ///Creating a new array with doubled capacity from previous
        for (int idx = 0; idx < capacity; idx++){ //Filling new array with previous array data
            newArray[idx] = array[idx];
        }
        delete []array; //Delete previous array
        array = newArray; //updating array
        capacity = capacity*2; //Updating Capacity
    }
    
    array[nextIndex] = element;
    nextIndex++;
}

//Remove top element from our stack
template<typename var> 
void Stack<var>::pop(){
    if (isEmpty()){
        std::cout << "Empty stack\n";
        return;
    }
    nextIndex--;
}

//Return the topmost element of the Stack

template<typename var> 
var Stack<var>::top(){
    if (isEmpty()){
        std::cout << "Empty stack\n";
        return 0;
    }
    return array[nextIndex-1];
}


