#include<iostream>

void printAllprefixes(char str[]){

    for (int idx = 0; str[idx] != '\0'; idx++)
    {
        for (int ydx = 0; ydx <= idx; ydx++)
        {
            std::cout << str[ydx]; 
        }   
        std::cout << std::endl;
    }
}

int main(){

    char str[] = "abcd";
    printAllprefixes(str);

    return 0;
}