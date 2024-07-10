#include<iostream>

void BubbleSort(int array[], int size){

    for (int idx = 1; idx <= size-1; idx++)
    {
        int flag = 0;
        for (int jdx = 0; jdx <= size-2; jdx++)
        {
            if (array[jdx] > array[jdx+1])
            {
                int temp = array[jdx];
                array[jdx] = array[jdx+1];
                array[jdx+1] = temp;
                flag = 1;
            }
        }
        if (flag == 0) //Array is already sorted
        {
            break; //Come out of the loop
        }
        
    }
    
}


int main(){

    int size;
    std::cin >> size;

    int array[size];
    for (int idx = 0; idx < size; idx++)
    {
        std::cin >> array[idx];
    }

    BubbleSort(array, size);
    
    for (int jdx = 0; jdx < size; jdx++)
    {
        std::cout << array[jdx] << " ";
    }
    std::cout << std::endl;
    return 0;
}