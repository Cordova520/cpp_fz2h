#include<iostream>
#include<algorithm>
int main(){

    int size;
    std::cin >> size;

    int array[size];
    for (int idx = 0; idx < size; idx++)
    {
        std::cin >> array[idx];
    }
    
    std::sort(array, array+size);

    for (int jdx = 0; jdx < size; jdx++)
    {
        std::cout << array[jdx];
    }

    std::cout << std::endl;

    return 0;
}