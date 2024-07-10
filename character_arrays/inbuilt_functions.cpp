#include<iostream>
#include<cstring>

int main(){
    char str1[1000];
    std::cout << "Please introduce the string: \n"; 
    std::cin.getline(str1, 100);
    // int len = strlen(str1);
    // std::cout <<  "THe length of the string is: " << len << std::endl;
    char str2[1000];
    std::cout << "Please introduce the second string: \n"; 
    std::cin.getline(str2, 100);
    // if (strcmp(str1,str2) == 0)
    // {
    //     std::cout << "These strings are the same\n";
    // } else if (strcmp(str1, str2) != 0)
    // {
    //     std::cout << "These strings are different\n";
    // }
    std::cout << "String 1: " << str1 << std::endl;
    std::cout << "String 2: " << str2 << std::endl;

    // strcpy(str1, str2);
    // strncpy(str1, str2, 3);

    strcat(str1,str2); 

    std::cout << "Final String: " << str1 << std::endl;
    // std::cout << "String 2: " << str2 << std::endl;
    
    return 0;
}