#include<iostream>
#include<vector>

void storeSubsequences(std::string input, std::string output, std::vector<std::string> &stored){
    if (input.length() == 0){
        stored.push_back(output);
        return;
    }
    storeSubsequences(input.substr(1), output, stored); //Excluding part
    storeSubsequences(input.substr(1), output + input[0], stored); //Inlcuding Part
}


int main(){
    std::string word = "abc";
    std::cout << "Original Word: " << word << std::endl << "Subsequences: \n";
    std::string output = "";
    
    std::vector<std::string> stored;
    storeSubsequences(word, output, stored);
    for (int idx = 0; idx < stored.size(); idx++){
        std::cout << stored[idx] << std::endl;
    }
    
    return 0;
}