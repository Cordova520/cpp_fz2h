#include<iostream>

//Using Dynamic Programming - Bidirectional
int firstFibonacci(int number, int* array);
//Using Dynamic Programming - Unidirectional
int secondFibonacci(int number);

int main(){
    int number;
    int* arr = new int(number+1);
    std::cin >> number;
    for (int idx = 0; idx <= number; idx++){
        arr[idx] = 0;
    }
    std::cout << firstFibonacci(number, arr);
    std::cout << std::endl;
    delete []arr;
    std::cout << secondFibonacci(number);
    std::cout << std::endl;
    return 0;
}


int firstFibonacci(int number, int* array){
    if (number==0 || number==1) return number;
    if (array[number] != 0) return array[number];
    int output = firstFibonacci(number-1, array) + firstFibonacci(number-2, array); 
    
    array[number] = output; ///Store for future use
    return output;
}

int secondFibonacci(int number){
    int *array = new int(number+1);
    array[0] = 0;
    array[1] = 1;
    for (int idx = 2; idx <= number; idx++){
        array[idx] = array[idx-1] + array[idx-2];
    }

    int output = array[number];
    delete []array;
    return output;
}