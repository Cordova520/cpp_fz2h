#include<iostream>

void removeDuplicates(char input[]){
    if (input[0] == '\0'){
        return;
    }else if (input[0] != input[1]){
        removeDuplicates(input+1);
    }else if(input[0] == input[1]){
        for (int idx = 0; input[idx] != '\0'; idx++)
        {
            input[idx] = input[idx+1];
        }
        removeDuplicates(input);
    }
        
}

int main(){
    char word[] = "aabbccceeedatt";
    std::cout << "Original Word: " << word << std::endl;
    removeDuplicates(word);
    std::cout << "Result: " << word << std::endl;
    return 0;
}