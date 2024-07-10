#include<iostream>

//This program set 3 different solutions for problem #70 on LeetCode

int countStepsRecursive(int number); //Recursive Method
int countStepsDP(int number); //Using Dynamic Programming
int countStepsDPK(int number, int factor); //Using Dynamic programming for a pace of k steps

int main(){
    int number;
    std::cin >> number;
    // std::cout << "The minimun number of steps is: " << countStepsRecursive(number) << std::endl;
    std::cout << "The minimun number of steps is: " << countStepsDP(number) << std::endl;
    std::cout << "The minimun number of steps is: " << countStepsDPK(number, 2) << std::endl;
    return 0;
}

int countStepsRecursive(int number){
    if (number==0 || number==1) return 1;
    return countStepsRecursive(number-1) + countStepsRecursive(number-2);
    
}

int countStepsDP(int number){
    int steps[number+1];
    steps[0] = 1;
    steps[1] = 1;
    for (int idx = 2; idx <= number; idx++){
        steps[idx] = steps[idx-1] + steps[idx-2];
    }
    
    return steps[number];
}

int countStepsDPK(int number,int factor){
    int steps[number+1];
    steps[0] = 1;
    for (int idx = 1; idx <= number; idx++){
        int ans = 0;
        for (int jdx = 1; jdx <= factor; jdx++){
            if(idx-jdx >= 0){
                ans += steps[idx-jdx];
            }
        }
        steps[idx] = ans;
    }
    return steps[number];
}

