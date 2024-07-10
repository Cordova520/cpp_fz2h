#include<iostream>

int main(){

    int variable_1, variable_2;
    std::cout << "Please give to numbers which I will change its values"<< std::endl;
    std::cin >> variable_1 >> variable_2;
    std::cout << "Before Swapping\n" << "a = " << variable_1 << "\n" << "b = " << variable_2 << std::endl;
    
    // int temp = variable_1;
    // variable_1 = variable_2;
    // variable_2 = temp;

    // variable_1 = variable_1 ^ variable_2;
    // variable_2 = variable_1 ^ variable_2;
    // variable_1 = variable_1 ^ variable_2;

    std::swap(variable_1, variable_2);

    std::cout << "After Swapping\n" << "a = " << variable_1 << "\n" << "b = " << variable_2 << std::endl;

    return 0;
}