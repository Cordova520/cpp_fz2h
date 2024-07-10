#include<iostream>


void selectionSort(int array[], int size){
    for (int idx = 0; idx < size-2; idx++)
    {
        int smallest  =  idx;
        for (int jdx = idx+1; jdx <= size-1; jdx++)
        {
            if (array[jdx] < array[smallest])
            {
                smallest = jdx;
            }
        }
        
        std::swap(array[idx], array[smallest]);
    }
}

int main(){

    int size;
    std::cout << "How long you wish the list to be?\n";
    std::cin >> size;
    int array[size];
    std::cout << "Input the members of the list one by one\n";
    for (int idx = 0; idx < size; idx++)
    {
        std::cin >> array[idx];
    }

    selectionSort(array, size);

    for (int jdx = 0; jdx < size; jdx++)
    {
        std::cout << array[jdx] << " ";
    }
    std::cout << std::endl;

    return 0;
}