#include<iostream>

int length(char input[]){
    int numberOfLetters = 0;
    for (int idx = 0; input[idx] != '\0' ; idx++)
    {
        numberOfLetters++;
    }
    return numberOfLetters;
    
}

int main(){

    char word[100];
    std::cout << "Enter your name: \n";
    std::cin >> word;

    std::cout << "Your name is: " << word << std::endl;
    std::cout << "The number of letters your name has is: " << length(word) << std::endl;

    return 0;
}