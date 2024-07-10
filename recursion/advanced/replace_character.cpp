#include<iostream>

void replace(char input[], char target, char replacement){
    if (input[0] == '\0'){
        return;
    }
    if (input[0] == target){
        input[0] = replacement;
    }
    replace(input+1, target, replacement);
}

int main(){
    char word[] = "Hello";
    std::cout << "Original Word: " << word << std::endl;
    char target = 'l';
    char replacement = 'x';
    replace(word, target, replacement);
    std::cout << "Result: " << word << std::endl;
    return 0;
}