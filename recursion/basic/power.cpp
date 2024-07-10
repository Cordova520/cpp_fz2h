#include<iostream>

int power(int base, int pow){
    ///Base Case
    switch (pow){
    case 0: return 1;
        break;
    case 1: return base;
    default:
    //Recursive
        int smallerOutput = power(base, pow-1);
    ///Calculation
        return base*smallerOutput;
        break;
    }
}

int main(){
    std::cout << power(2,8) << std::endl;
    return 0;
}