#include<iostream>

int fibonacci(int number){
    /// Base case
    switch (number){
    case 0:
        return 0;
        break;
    case 1:
        return 1;
    default:
    ///Recursive Case
        int ans1 = fibonacci(number - 1);
        int ans2 = fibonacci(number - 2);
        //Calculation
        int ans = ans1 + ans2;
        return ans;
        break;
    }
}

int main(){
    std::cout << fibonacci(17) << std::endl;
    return 0;
}