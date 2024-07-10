#include<iostream>

bool isSorted(int array[], int size){
    ///Base case
    if (size == 1 || size == 0){
        return true;
    }
    if (array[0] > array[1]){
        return false;
    }
    ///Recursive case
    bool smallerAns = isSorted(array + 1, size - 1);
    ///Computation Case
    return smallerAns;
}

bool isSorted2(int array[], int size){
    ///Base case
    if (size == 1 || size == 0){
        return true;
    }
    ///Recursive case
    bool smallerAns = isSorted(array + 1, size - 1);
    ///Computation Case
    if (!smallerAns)
    {
        return false;
    }else{
        return true;
    }
}

bool isSorted3(int array[], int size){
    ///Base case
    if (size == 1 || size == 0){
        return true;
    }
    ///Base case
    if (array[size -2] > array[size - 1]){
        return false;
    }
    return isSorted3(array, size-1);
}

int main(){
    int array[] = {2,1,3,4,5};
    int size = sizeof(array) / sizeof(array[0]);
    std::cout << isSorted3(array, size) << std::endl;
    return 0;
}