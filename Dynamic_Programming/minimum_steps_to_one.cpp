#include<iostream>
#include<cmath>

//Get the minimum steps for the number given to decrease to 1. Only the following rules are allowed:
// - Decrease by 1
// - Divide by 2
// - Divide by 3

int helper(int number, int* ans);
int minimumStepsBF(int number); //Using brute force
int minimumStepsMemorization(int number); //Using memorization DP
int minimumStepsBU(int number); //Bottom-Up approach

int main(){ 
    int number;
    std::cin >> number;
    std::cout << "The minimun number of steps is: " << minimumStepsBF(number) << std::endl;
    std::cout << "The minimun number of steps is: " << minimumStepsMemorization(number) << std::endl;
    std::cout << "The minimun number of steps is: " << minimumStepsBU(number) << std::endl;
    return 0;
}

int helper(int number, int* arr){
    //Base Case
    if (number<=1)return 0;
    if(arr[number] != -1) return arr[number];
    //Recursion
    int case_1 = helper(number-1, arr);
    int case_2 = INT16_MAX, case_3 = INT16_MAX;
    if (number%2==0){
        case_2 = helper(number/2, arr);
    }else if (number%3==0){
        case_3 = helper(number/3, arr);
    }
    int ans = std::min(case_1, std::min(case_2, case_3)) + 1;
    ///Save ans for future use
    arr[number] = ans;
    return ans;
}

int minimumStepsBF(int number){
    //Base Case
    if (number<=1)return 0;
    //Recursion
    int case_1 = minimumStepsBF(number-1);
    int case_2 = INT16_MAX, case_3 = INT16_MAX;
    if (number%2==0){
        case_2 = minimumStepsBF(number/2);
    }else if (number%3==0){
        case_3 = minimumStepsBF(number/3);
    }
    int ans = std::min(case_1, std::min(case_2, case_3)) + 1;
    return ans;
}

int minimumStepsMemorization(int number){
    int* ans = new int[number+1];
    for (int idx = 0; idx <= number; idx++){
        ans[idx] = -1;
    }
    return helper(number, ans);
}

int minimumStepsBU(int number){
    int* bottom_up = new int[number+1];
    bottom_up[0] = 0;
    bottom_up[1] = 0;
    // bottom_up[idx] = min steps needed to move from idx to 1, ans = bottom_up[number]
    for (int idx = 2; idx <= number; idx++){
        int case_1 = bottom_up[idx-1];
        int case_2 = INT16_MAX, case_3 = INT16_MAX;
        if (idx%2==0){
        case_2 = bottom_up[idx/2];
        }else if (idx%3==0){
            case_3 = bottom_up[idx/3];
        }
        bottom_up[idx] = std::min(case_1,std::min(case_2, case_3)) + 1;
    }
    int ans = bottom_up[number];
    delete []bottom_up;
    return ans;
}