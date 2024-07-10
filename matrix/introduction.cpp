#include<iostream>

int main(){

    int array[100][100];
    int row, column;
    std::cin >> row >> column;

    for (int idx = 0; idx < row; idx++)
    {
        for (int  jdx = 0; jdx < column; jdx++)
        {
            std::cin >> array[idx][jdx];
        }
    }
    //Rowise
    for (int idx = 0; idx < row; idx++)
    {
        for (int  jdx = 0; jdx < column; jdx++)
        {
            std::cout << array[idx][jdx] << " ";
        }
        std::cout << std::endl;
    }
    //Columnwise
    for (int idx = 0; idx < column; idx++)
    {
        for (int  jdx = 0; jdx < row; jdx++)
        {
            std::cout << array[jdx][idx] << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}