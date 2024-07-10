#include<iostream>

void print(char input[]){
    if (input[0] == '\0'){
        return;
    }
    std::cout << input[0];
    print(input+1);
}

void reversePrint(char input[]){
    if (input[0] == '\0'){
        return;
    }
    reversePrint(input+1);
    std::cout << input[0];
}

int main(){
    char input[] = "abcdefghijklmnopqrstuvwxyz";
    print(input);
    std::cout<< std::endl;
    reversePrint(input);
    std::cout<< std::endl;
    return 0;
}