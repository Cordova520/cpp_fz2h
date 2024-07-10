#include<iostream>

int staircase(int number){
    if (number == 0 || number == 1){
        return 1;
    }else if (number < 0){
        return 0;
    }
       
    return staircase(number-1) + staircase(number-2) + staircase(number-3);
}

int main(){

    int number;
    std::cin >> number;
    std::cout << "There are: " << staircase(number) << " number of ways to reach " << number << std::endl;
    return 0;
}