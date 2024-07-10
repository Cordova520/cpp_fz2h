#include<iostream>

int main(){

    int size;
    std::cout << "How many elements does your array have?" << std::endl; //Asking for the size of the array
    std::cin >> size; //GEtting the size of the array given by the user

    int array[size];
    int sum = 0;
    int arrrSize = sizeof(array)/sizeof(array[0]); //get the size of the array
    std::cout << "Please enter the number for the array\n"; 
    for(int i = 0; i < arrrSize; i++){
        std::cin >> array[i]; //Assigning values to the elements of the array one by one
        sum += array[i]; //Adding the elements of the array
    }

    std::cout << "The total sum of the array is: " << sum << std::endl;

    return 0;
}