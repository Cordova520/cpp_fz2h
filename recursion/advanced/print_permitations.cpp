#include<iostream>

void printPermutations(char word[], int idx=0){
    if (word[idx] == '\0'){
        std::cout << word << std::endl;
        return;
    }
    for (int  jdx = idx; word[jdx] != '\0'; jdx++){
        std::swap(word[idx], word[jdx]);
        printPermutations(word, idx+1);
        std::swap(word[idx], word[jdx]);
    }
}

int main(){
    char word[] = "ABC";
    printPermutations(word);
    return 0;
}