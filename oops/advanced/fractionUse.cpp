#include <iostream>
using namespace std;
#include "fraction.cpp"

int main() {
    Fraction f1(10,3);
    Fraction f2(5,2);

    f1 += f2;
    // Fraction f3 = f1.add(f2);
    // Fraction f4 = f1 + f2;
    // int i=5;
    // int j=3;
    // (i+=j)+=j;
    // cout<< i << " " << j << endl;
    // Fraction f3 = f1++;
    f1.print();
    // f3.print();
    f2.print();
    // f3.print();
    // f4.print();

    // Fraction f5 = f1 * f2;
    // f5.print();

    // if (f1 == f2)
    // {
    //     cout << "equal\n"; 
    // }else{
    //     cout << "not equal\n";
    // }
    
    //++f1;
    f1.print();

    // Fraction const f3;
    // cout<<f3.getNumerator()<<" "<<f3.getDenominator();

    //f3.setNumerator(10);
	return 0;
}

