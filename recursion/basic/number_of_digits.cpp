#include<iostream>

int numberOfDigits(int number){
    //Base Case
    if (number <= 0){
        return 0;
    }else{
        ///Recursive Case
        int smallerCase = numberOfDigits(number/10);
        ///Calculation
        return smallerCase + 1;
    }
    
}

int main(){
    std::cout << numberOfDigits(312) << std::endl;
    return 0;
}