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
    std::cout << "Reverse Printing: \n";
    for(int jdx = arrSize - 1; jdx >= 0; jdx--){
        std::cout << array[jdx] << "\n"; //Printing the array in reverse
    }

    return 0;
}