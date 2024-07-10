#include<iostream>

int sumOfArray(int array[],int size){
    //Base case
    if (size == 0){
        return 0;
    }else if (size == 1){
        return array[0];
    }
    //Recursive case
    return array[0] + sumOfArray(array+1, size-1);
}

int sumOfArray2(int array[],int size){
    //Base case
    if (size == 0){
        return 0;
    }
    //Recursive case
    return array[size-1] + sumOfArray2(array, size-1);
}

int main(){
    int array[] = {1,2,3,4,5};
    int size = sizeof(array) / sizeof(array[0]);
    std::cout << sumOfArray2(array, size) << std::endl;
    return 0;
}