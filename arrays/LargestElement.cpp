#include<iostream>

int main(){

    int size;
    std::cout << "How many elements does your array have?" << std::endl; //Asking for the size of the array
    std::cin >> size; //GEtting the size of the array given by the user

    int array[size];
    int largest = INT32_MIN;
    int smallest = INT32_MAX;
    int arrrSize = sizeof(array)/sizeof(array[0]); //get the size of the array
    std::cout << "Please enter the number for the array\n"; 
    for(int i = 0; i < arrrSize; i++){
        std::cin >> array[i]; //Assigning values to the elements of the array one by one
        if (array[i] > largest) //Checking if the next number in the array is larger than the reference
        {
            largest = array[i];
        }
        if (array[i] < smallest) //Checking if the next number in the array is smaller than the reference
        {
            smallest = array[i];
        }
        
    }

    std::cout << "The largest number in the array is: " << largest << std::endl;
    std::cout << "The smallest number in the array is: " << smallest << std::endl;
    return 0;
}