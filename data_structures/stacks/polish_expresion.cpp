#include<iostream>
#include<vector>
#include<stack>

///This code corresponds to the problem 150 in LeetCode: Reverse Polish Notation

int evalRPN(std::vector<std::string>& tokens){
    std::stack<int> result;
    for (int idx=0; idx<tokens.size(); idx++){
        if (tokens[idx] == "+" || tokens[idx] == "-" || tokens[idx] == "*" || tokens[idx] == "/"){
            int value_1 = result.top();
            result.pop();
            int value_2 = result.top();
            result.pop();
            if (tokens[idx] == "+"){
                result.push(value_1 + value_2); //Push result inside stack
            }else if (tokens[idx] == "-"){
                result.push(value_1 - value_2); //Push result inside stack
            }else if (tokens[idx] == "*"){
                result.push(value_1 * value_2); //Push result inside stack
            }else if (tokens[idx] == "/"){
                result.push(value_1 / value_2); //Push result inside stack
            }
            
        }else {
            ///Operands
            result.push(atoi(tokens[idx].c_str()));
        }
    }
    ///One element inside stack
    std::cout << "The result of the operations is: " << result.top() << std::endl;
    return result.top();
}

int main(){
    std::vector<std::string> example {"4", "13", "5", "/", "*"};
    int result = evalRPN(example);

    std::cout << "The result of the operations is: " << result << std::endl;

    return 0;
}
