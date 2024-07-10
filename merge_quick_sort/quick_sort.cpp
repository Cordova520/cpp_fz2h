#include<iostream>
#include<algorithm>

int partition(int array[], int start, int end){
    int countSmaller = start;
    int pivot = array[end];
    for (int idx = start; idx <= end; idx++){
        if (array[idx] < pivot){
            int temp = array[countSmaller];
            array[countSmaller] = array[idx];
            array[idx] = temp;
            countSmaller += 1;
        }
    }

    int temp = array[countSmaller];
    array[countSmaller] = array[end];
    array[end] = temp;

    return countSmaller;   
}

void quickSort(int array[], int start, int end){
    if (start >= end){
        return;
    }
    int pivotIndex = partition(array, start, end);
    quickSort(array, start, pivotIndex-1);
    quickSort(array, pivotIndex+1, end);
}

int main(){
    int example[] = {4, 3, 8, 2, 1};
    int arrrSize = sizeof(example)/sizeof(example[0]);
    int end = arrrSize -1;
    int start = 0;
    quickSort(example, start, end);
    for (int idx = 0; idx < arrrSize; idx++){
        std::cout << example[idx] << " ";
    }
    
    std::cout << std::endl;

    return 0;
}