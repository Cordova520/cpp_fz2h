#include<iostream>

int zeroes(int number){
    //Base Case
    if (number == 0){
        return 0;
    }else{
        //Recursive
        int smallerAns = zeroes(number/10);
        //Calculation 
        int digit = number % 10;
        if (digit == 0){
            return 1 + smallerAns;
        }else{
            return smallerAns;
        }
    }
    
}

int main(){
    std::cout << zeroes(10320) << std::endl;
    return 0;
}