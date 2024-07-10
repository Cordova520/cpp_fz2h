#include<iostream>

bool checkElement(int array[], int size, int key){
    //Base case
    if (array[0] == key){
        return true;
    }else if (size == 0){
        return false;
    }
    //Recursive case
    bool smallAns = checkElement(array+1, size-1, key);
    return smallAns;
    
}

bool checkElement2(int array[],int size, int key){
    //Base case
    if (array[size-1] == key){
        return true;
    }else if (size == 0){
        return false;
    }
    //Recursive case
    bool smallAns = checkElement2(array, size-1, key);
    return smallAns;
    
}

int main(){
    int array[] = {1,2,3,4,5};
    int size = sizeof(array) / sizeof(array[0]);
    if (checkElement2(array, size, 0)){
        std::cout << "Found" << std::endl;
    }else{
        std::cout << "Not in the arrray" << std::endl;
    }
    
    return 0;
}