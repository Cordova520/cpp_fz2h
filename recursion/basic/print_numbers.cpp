#include<iostream>

void print(int range){
    ///BAse case
    switch (range){
    case 0: return; ///Mandatpry
        break;
    default:
        ///Recursive Case
        print(range-1); //// 1 2 3 4 5 ... range-1
        ///Calculation case
        std::cout << range << " ";
        break;
    }
}

#include<iostream>

void print_backwards(int range){
    ///BAse case
    switch (range){
    case 0: return; ///Mandatory
        break;
    default:
        std::cout << range << " ";
        ///Recursive Case
        print_backwards(range-1); //// n n-1 n-2 ... 1
        break;
    }
}

int main(){
    print(5);
    std::cout << std::endl;
    print_backwards(5);
    std::cout << std::endl;
    return 0;
}