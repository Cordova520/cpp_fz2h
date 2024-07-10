#include<iostream>
#include<cmath>

class Fraction
{
private:
    int numerator;
    int denominator;
public:
    Fraction(int numerator, int denominator);
    ~Fraction();
    void print(){
        std::cout << this->numerator << "/" << this->denominator << std::endl; //optional
    }
    void add(Fraction const &fraction_2){
        int lcm = this->denominator * fraction_2.denominator;
        int new_denominator_1 = lcm/denominator;
        int new_denominator_2 = lcm/fraction_2.denominator;
        int new_numerator = new_denominator_1*numerator + new_denominator_2*fraction_2.numerator;

        //Store result in fraction_1
        this->numerator = new_numerator;
        this->denominator = lcm;

        simplify();
        // fraction_2.numerator = -1; //We want to avoid this
    }
    void multiply(Fraction const &fraction_2){
        numerator = numerator*fraction_2.numerator;
        denominator = denominator*fraction_2.denominator;
        simplify();  
    }

    void simplify(){
        int gcd =1;
        int gcd_max = std::min(this->numerator, this->denominator);
        for (int idx = 1; idx <= gcd_max; idx++){
            if (numerator%idx == 0 && denominator%idx == 0)
            {
                gcd = idx;
            }
            //Simplify
            numerator /= gcd;
            denominator /= gcd;
        }
    }                                     
};

Fraction::Fraction(int numerator, int denominator)
{
    this -> numerator = numerator;
    this -> denominator = denominator;
}

Fraction::~Fraction()
{
    std::cout << "Object destroyed\n";
}


