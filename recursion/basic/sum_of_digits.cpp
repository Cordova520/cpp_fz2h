#include<iostream>

int sumOfDigits(int number){
    //Base Case
    if (number == 0){
        return 0;
    }else{
        ///Recursive Case
        int smallerCase = sumOfDigits(number/10);
        ///Calculation
        return (number % 10) + smallerCase;
    }
    
}

int main(){
    std::cout << sumOfDigits(9283) << std::endl;
    return 0;
}