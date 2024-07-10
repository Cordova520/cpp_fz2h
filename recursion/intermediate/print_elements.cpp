#include<iostream>

void printAllPositions(int array[], int size, int number, int idx){

    if (idx == size){
        return;
    }else if (array[idx] == number){
        std::cout << idx << " ";
    }
    printAllPositions(array, size, number, idx+1);
}

int main(){
    int array[] = {5,5,6,5,6,7};
    int size = sizeof(array) / sizeof(array[0]);
    int idx = 0;
    int key = 50;
    printAllPositions(array, size, key, idx);
    std::cout << std::endl;
    return 0;
}