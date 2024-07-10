#include<iostream>

int firstElement(int array[], int size, int key, int idx){
    ///Base case
    if (size == 0){
        return -1;
    }else if (idx == size){
        return -1;
    }else if (array[idx] == key){
        return idx;
    }
    //Recursion
    int smallAns = firstElement(array, size, key, idx+1);
    return smallAns;
}

int main(){
    int array[] = {1,2,3,4,1};
    int size = sizeof(array) / sizeof(array[0]);
    std::cout << firstElement(array, size, 1, 0) << std::endl;
    
    return 0;
}