#include<iostream>

int length(char input[]){
    int numberOfLetters = 0;
    for (int idx = 0; input[idx] != '\0' ; idx++)
    {
        numberOfLetters++;
    }
    return numberOfLetters;
    
}

void reverse(char input[]){
    int start = 0;
    int end = length(input) - 1;

    while (start < end) //Here we are swapping the last element with the first and viceversa
    {
        int temp = input[start];
        input[start] = input[end];
        input[end] = temp;
        start++; //Increment the start of the index
        end--; //decrement the end of the array
    }
}

int main(){
    char word[1000];

    std::cout << "PLease enter a string" << std::endl; //Asking for the size of the array
    std::cin.getline(word, 100); //GEtting the input array

    std::cout << "Please enter the number for the array\n"; 
    
    std::cout << "Reverse Printing: \n";
    reverse(word);
    std::cout << "Reverse string: " << word << std::endl;


    return 0;
}