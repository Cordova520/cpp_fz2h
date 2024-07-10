#include<iostream>

void occurrence(int array[], int size, int key, int &total){
    if (array[0] == key){
        total += 1;
    }else if (size == 0){
        return;
    }
    occurrence(array+1, size-1, key, total);
}

int main(){
    int array[] = {1,2,2,2,1};
    int size = sizeof(array) / sizeof(array[0]);
    int key = 1;
    int total = 0;
    occurrence(array, size, key, total);
    std::cout << total << std::endl;

    return 0;
}