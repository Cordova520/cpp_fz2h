#include<iostream>

int factorial(int number){
    if (number < 0) return -1;
    if (number == 1) return 1; /// Base case 1st step
    int samallAns = factorial(number-1); /// 2nd step assumption, Recursive case
    return number * samallAns; // 3rd step, calculation step
}

int main(){

    int number;
    std::cin >> number;

    int ans = factorial(number);

    std::cout << "The result is: " << ans << std::endl;
    return 0;
}