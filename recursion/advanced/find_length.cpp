#include<iostream>

int length(char input[]){
    if (input[0] == '\0'){
        return 0;
    }
    return 1 + length(input+1);
}

int main(){
    char input[] = "abcdefghijklmnopqrstuvwxyz";
    int len = length(input);
    std::cout<< "The length of the array is: " << len << std::endl;
}