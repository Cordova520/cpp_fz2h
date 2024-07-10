#include<iostream>
#include<stack>
#include<string>
#include<algorithm>

///This code correspond to the problem 1047 "Remove All Adjacent Duplicates In String" from LeeCode

std::string removeDuplicates(std::string& word){
    std::stack<char> input;
    for (int idx = 0; idx < word.size(); idx++){
        if (input.empty() || word[idx] != input.top()){
            input.push(word[idx]);
        }else{
            input.pop();
        }
    }

    std::string ans = "";
    while (!input.empty()){
        ans.push_back(input.top());
        input.pop();
    }
    
    reverse(ans.begin(), ans.end());

    return ans;
}

int main(){
    std::string test = "abbaca";
    std::string result;
    result = removeDuplicates(test);

    std::cout << "The answer is: " << result << std::endl;
    return 0;
}