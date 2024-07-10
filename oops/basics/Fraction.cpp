#include<iostream>
#include "fraction_class.cpp"

int main(){

    Fraction fraction1(10,2);
    Fraction fraction2(15,4);

    fraction1.add(fraction2);
    fraction1.print();
    fraction2.print();

    fraction1.multiply(fraction2);
    fraction1.print();
    fraction2.print();
    
    return 0;
}