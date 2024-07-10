#include<iostream>

int lastElement(int array[], int size, int key, int idx){
    ///Base case
    if (size == 0){
        return -1;
    }else if (idx == -1){
        return -1;
    }else if (array[idx] == key){
        return idx;
    }
    //Recursion
    int smallAns = lastElement(array, size, key, idx-1);
    return smallAns;
}

int lastElement2(int array[], int size, int key){
    ///Base case
    if (size == 0){
        return -1;
    }else if (array[size-1] == key){
        return size-1;
    }
    //Recursion
    int smallAns = lastElement2(array, size-1, key);
    return smallAns;
}

int main(){
    int array[] = {5,5,6,5,6,7};
    int size = sizeof(array) / sizeof(array[0]);
    std::cout << lastElement(array, size, 6, size-1) << std::endl;
    std::cout << lastElement2(array, size, 6) << std::endl;
    return 0;
}