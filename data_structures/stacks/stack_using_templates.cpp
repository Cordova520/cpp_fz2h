#include<iostream>
#include "stack_class.cpp"

int main(){
    Stack<char> example;
    example.push(100);
    example.push(101);
    example.push(102);
    example.push(103);
    example.push(104);

    std::cout << example.top() << std::endl;
    example.pop();
    std::cout << example.top() << std::endl;
    example.pop();
    std::cout << example.top() << std::endl;
    example.pop();
    std::cout << example.Size() << std::endl;
    std::cout << example.isEmpty() << std::endl;
    return 0;
}