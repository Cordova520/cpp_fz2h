#include<iostream>

void mergeArrays(int first_array[], int second_array[], int input_array[], int start, int end){
    int mid = (start + end) / 2;
    int idx = start;
    int jdx = mid + 1;
    int aux = start;
    while (idx <= mid && jdx <= end){
        if (first_array[idx] < second_array[jdx]){
            input_array[aux] = first_array[idx];
            idx++;
            aux++;
        }else{
            input_array[aux] = second_array[jdx];
            jdx++;
            aux++;
        }
    }

    while (idx <= mid){
        input_array[aux] = first_array[idx];
        aux++;
        idx++;
    }
    while (jdx <= end){
        input_array[aux] = second_array[jdx];
        aux++;
        jdx++;
    }   
}

void mergeSort(int array[], int start, int end){
    if (start >= end){
        return;
    }
    int mid = (start + end) / 2;
    int first_array[100], second_array[100];
    for (int idx = 0; idx <= mid; idx++){
        first_array[idx] = array[idx];
    }
    for (int jdx = mid+1; jdx <= end; jdx++){
        second_array[jdx] = array[jdx];
    }
    
    mergeSort(first_array, start, mid);
    mergeSort(second_array, mid+1, end);
    mergeArrays(first_array, second_array, array, start, end);
}

int main(){
    int array[] = {7, 3, 10, 5, 6, 2, -5, 78};
    int start = 0;
    int arrrSize = sizeof(array)/sizeof(array[0]);
    int end = arrrSize -1;
    mergeSort(array, start, end);

    for (int idx = 0; idx < arrrSize; idx++){
        std::cout<< array[idx] << " ";
    }

    std::cout << std::endl;
    
    return 0;
}