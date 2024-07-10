#include<iostream>
#include<stack>

int main(){
    std::stack<int> example;
    example.push(1);
    example.push(2);
    example.push(3);
    example.push(4);
    example.push(5);
    example.push(6);

    std::cout << example.top() << std::endl;
    example.pop();
    std::cout << example.top() << std::endl;
    example.pop();

    std::cout << example.size() << std::endl;

    std::cout << example.empty() << std::endl;

    while (!example.empty())
    {
        std::cout << example.top() << std::endl;
        example.pop();
    }

    std::cout << example.size() << std::endl;
    

    return 0;
}