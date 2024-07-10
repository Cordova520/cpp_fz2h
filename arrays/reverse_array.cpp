#include<iostream>

int main(){
    int size;
    std::cout << "How many elements does your array have?" << std::endl; //Asking for the size of the array
    std::cin >> size; //GEtting the size of the array given by the user

    int array[size];
    int arrSize = sizeof(array)/sizeof(array[0]); //get the size of the array
    std::cout << "Please enter the number for the array\n"; 
    for(int idx = 0; idx < arrSize; idx++){
        std::cin >> array[idx]; //Assigning values to the elements of the array one by one
    }

    int start = 0;
    int end = arrSize - 1;
    
    while (start <= end) //Here we are swapping the last element with the first and viceversa
    {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++; //Increment the start of the index
        end--; //decrement the end of the array
    }
    std::cout << "Reverse Printing: \n";
    for(int idx=0; idx < arrSize; idx++){
        std::cout << array[idx] << "\n";
    }

    return 0;
}