#include<iostream>

//When passing a matrix to a function, the number of columns is mandatory, number of rows is not
void printArray(int array[][5], int rows, int columns){
    for (int idx = 0; idx < rows; idx++)
    {
        for (int  jdx = 0; jdx < columns; jdx++)
        {
            std::cout << array[idx][jdx] << " ";
        }
        std::cout << std::endl;
    }
}

int main(){

    //Number the number of columns is mandatory, number of rows is not
    int arr[5][5] = {{1,2},
                    {3,4}};

    int arrb[5][5] = {{0}}; //The members of the matrix not specified in the declaration will be taken as 0s
    printArray(arrb, 5, 5);
    return 0;
}