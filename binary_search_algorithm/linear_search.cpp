#include<iostream>


int linearSearch(int array[], int size, int key){

    for (int idx = 0; idx <= size; idx++)
    {
        if (array[idx] == key)
        {
            return idx;
        }
    }
    
    return -1;
}

int main(){

    int size;
    std::cin >> size;
    int array[size];

    for (int idx = 0; idx < size; idx++)
    {
        std::cin >> array[idx];
    }

    std::cout << "Enter Key: " << std::endl;
    int key;
    std::cin >> key;
    
    int position = linearSearch(array, size, key);

    if (position != -1)
    {
        std::cout << "The given key is present at index: " << position << std::endl;
    }else{
        std::cout << "Key not found\n";
    }
    
    return 0;
}