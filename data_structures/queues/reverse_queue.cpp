#include<iostream>
#include<stack>
#include<queue>

int main(){
    std::queue<int> input;
    std::stack<int> output;

    for (int idx = 1; idx <= 5; idx++){
        input.push(idx);
    }

    while(!input.empty()){
        output.push(input.front());
        input.pop();
    }

    while(!output.empty()){
        input.push(output.top());
        output.pop();
    }

    while(!input.empty()){
        std::cout << input.front() << " ";
        input.pop();
     }     
     
    std::cout << std::endl;
    return 0;
}