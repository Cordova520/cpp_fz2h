#include<iostream>
// #include"queue_using_array.cpp"
// #include"Dynamic_queue.cpp"
#include "queue_using_LL.cpp"

int main(){
    // Queue<int> example(5);
    Queue<int> example;
    example.push(10);
    example.push(20);
    example.push(30);
    example.push(40);
    example.push(50);
    example.push(60);
    example.push(70);

    std::cout << example.front() << std::endl;
    example.pop();
    example.pop();
    example.pop();

    std::cout << example.front() << std::endl;
    std::cout << example.getSize() << std::endl;
    std::cout << example.isEmpty() << std::endl;

    example.push(60);
    example.push(70);
    
    example.pop();
    example.pop();
    std::cout << example.front() << std::endl;
    std::cout << example.getSize() << std::endl;

    while (!example.isEmpty()){
        std::cout<< example.front()<< " ";
        example.pop();
    }
    
    std::cout << std::endl;
    std::cout << example.getSize() << std::endl;
    std::cout << example.isEmpty() << std::endl;
    return 0;
}