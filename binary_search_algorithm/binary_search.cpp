#include<iostream>
#include<algorithm>


int binarySearch(int array[], int size, int key){

    int start = 0;
    int end = size - 1;
    while (start <= end){
        int mid = start + ((start + end) / 2);
        if (array[mid] == key){return mid;}
        else if (array[mid] > key){
            end = mid -1;
        }else if (array[mid] < key){
            start = mid + 1;
        }
    }
    return -1;
}

int main(){

    int size;
    std::cin >> size;
    int array[size];

    for (int idx = 0; idx < size; idx++){
        std::cin >> array[idx];
    }

    std::sort(array, array+size);
    std::cout << "Enter Key: " << std::endl;
    int key;
    std::cin >> key;
    
    int position = binarySearch(array, size, key);

    if (position != -1){
        std::cout << "The given key is present at index: " << position << std::endl;
    }else{
        std::cout << "Key not found\n";
    }
    
    return 0;
}