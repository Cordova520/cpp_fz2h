#include<iostream>
#include<cmath>

double geometric(int number){
    //Base case
    if (number <= 0){
        return 1;
    }else{
        //Recursive
        double smallerAns = geometric(number - 1);
        //Calculation
        return smallerAns + (1.0 / pow(2, number));
    }
}

int main(){
    std::cout << geometric(3) << std::endl;
    return 0;
}