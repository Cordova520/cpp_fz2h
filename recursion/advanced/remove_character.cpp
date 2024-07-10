#include<iostream>

void removeDuplicates(char input[], char target){
    if (input[0] == '\0'){
        return;
    }
    if (input[0] != target){
        removeDuplicates(input+1, target);
    }else{
        for (int idx = 0; input[idx] != '\0'; idx++)
        {
            input[idx] = input[idx+1];
        }
        removeDuplicates(input,target);
    }
}

int main(){
    char word[] = "Hello";
    std::cout << "Original Word: " << word << std::endl;
    char target = 'l';
    removeDuplicates(word, target);
    std::cout << "Result: " << word << std::endl;
    return 0;
}