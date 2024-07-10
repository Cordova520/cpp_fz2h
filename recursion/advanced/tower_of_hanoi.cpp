#include<iostream>

int hanoi(int disks){
    if (disks == 0){
        return 0;
    }
    return hanoi(disks-1) + 1 + hanoi(disks-1);
    
}

int main(){

    int number;
    std::cin >> number;
    std::cout << "There are: " << hanoi(number) << " steps to move " << number << " disks" << std::endl;
    return 0;
}