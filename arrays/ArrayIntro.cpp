#include <iostream>

int main(){
    
    // int a[10];
    // a[0] = 2;
    // a[4] = 5;

    // std::cout << a[0] << "\n" << a[4] << std::endl;

    int a[10]; // = {1, 2, 3, 4}; //Initialization
    int arrrSize = sizeof(a)/sizeof(a[0]); //get the size of the array
    // std::cout << a[0] << a[1] << a[2] << a[3] << std::endl; //Printing Values

    for(int i=0; i<arrrSize; i++){
        a[i] = i*i;
        std::cout << a[i] << "\n";
    }

    return 0;
}