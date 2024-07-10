#include<iostream>
#include<queue>

int main(){
    // Queue<int> example(5);
    std::queue<int> example;
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
    std::cout << example.size() << std::endl;
    std::cout << example.empty() << std::endl;

    example.push(60);
    example.push(70);
    
    example.pop();
    example.pop();
    std::cout << example.front() << std::endl;
    std::cout << example.size() << std::endl;

    while (!example.empty()){
        std::cout<< example.front()<< " ";
        example.pop();
    }
    
    std::cout << std::endl;
    std::cout << example.size() << std::endl;
    std::cout << example.empty() << std::endl;
    return 0;
}