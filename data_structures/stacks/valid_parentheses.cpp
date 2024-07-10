#include<iostream>
#include<stack>

/// This program corresponds to the solution of problem 20 on LeetCode
/// Given a string containing just the characters '(', ')', '[', ']', '{', '}' determine if the input is valid
/// An imput is valid if: Opens brackers must be closed by the same type of brackets and they must be closed in the correct order
bool isValid(std::string parentheses){
    std::stack<char> input;
    for (int idx = 0; idx < parentheses.size(); idx++){
        if (parentheses[idx] == '(' || parentheses[idx] == '[' || parentheses[idx] == '{'){
            input.push(parentheses[idx]);
        }else{
            if (input.empty()) return false;//if not written you might get runtime error
            else if (parentheses[idx] == ')'){
                if (input.top() == '(')input.pop();
                else return false;
            }else if (parentheses[idx] == ']'){
                if (input.top() == '[')input.pop();
                else return false;
            }else if (parentheses[idx] == '}'){
                if (input.top() == '{')input.pop();
                else return false;
            };
        }
    }

    if (input.empty()) return true;
        
    return false; 
}

int main(){

    std::string test = "()[){}";
    bool result = isValid(test);

    if (result){
        std::cout << "The input: " << test << " is valid\n";
    }else{
        std::cout << "The input: " << test << " is not valid\n";
    }
    return 0;
}