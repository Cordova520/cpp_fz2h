#include<iostream>

int multiply(int num1, int num2){
    ///Base Case
     if (num1 == 0 || num2 == 0){
        return 0;
     }else{
        ///Recursive case
        int smallerAns = multiply(num1, num2-1);
        //Calculation Case
        return smallerAns + num1;
     }
     
}

int main(){

    std::cout << multiply(7, 7) << std::endl;
    return 0;
}