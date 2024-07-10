#include<iostream>

void printSubsequences(std::string input, std::string output){
    if (input.length() == 0){
        std::cout << output << std::endl;
        return;
    }
    printSubsequences(input.substr(1), output); //Excluding part
    printSubsequences(input.substr(1), output + input[0]); //Inlcuding Part
}

void printSubsequences2(char input[], char output[], int idx){
    if (input[0] == '\0'){
        output[idx] = '\0';
        std::cout << output << std::endl;
        return;
    }
    
    printSubsequences2(input+1, output, idx); //Exlcluding Part
    output[idx] = input[0];
    printSubsequences2(input+1, output, idx+1); //Including Part
}

int main(){
    std::string word = "abc";
    std::cout << "Original Word: " << word << std::endl << "Subsequences: \n";
    std::string output = "";
    char input[100] = "abc";
    char out[10];
    int idx = 0;
    printSubsequences(word, output);
    printSubsequences2(input, out, idx);
    return 0;
}