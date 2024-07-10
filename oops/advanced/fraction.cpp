#include<iostream>
using namespace std;
class Fraction {
	private :

		int numerator;
		int denominator;

	public :

		Fraction() {

		}

		Fraction(int numerator, int denominator) {
			this -> numerator = numerator;
			this -> denominator = denominator;
		}

		int getNumerator() const {
			return numerator;
		}

		int getDenominator() const {
			return denominator;
		}

		void setNumerator(int n) {
			numerator = n;
		}

		void setDenominator(int d) {
			denominator = d;
		}

		void print() const {
			cout << this -> numerator << " / " << denominator << endl;
		}

		void simplify() {
			int gcd = 1;
			int j = min(this -> numerator, this -> denominator);
			for(int i = 1; i <= j; i++) {
				if(this -> numerator % i == 0 && this -> denominator % i == 0) {
					gcd = i;
				}
			}
			this -> numerator = this -> numerator / gcd;
			this -> denominator = this -> denominator / gcd;
		}

		// void add(Fraction const &f2) {
		// 	int lcm = denominator * f2.denominator;
		// 	int x = lcm / denominator;
		// 	int y = lcm / f2.denominator;

		// 	int num = x * numerator + (y * f2.numerator);

		// 	numerator = num;
		// 	denominator = lcm;
		// 	simplify();
		// }

		///// return a new object
		Fraction add(Fraction &f2) const {
			int lcm = denominator * f2.denominator;
			int x = lcm / denominator;
			int y = lcm / f2.denominator;

			int num = x * numerator + (y * f2.numerator);

			// numerator = num;
			// denominator = lcm;
			Fraction fnew(num, lcm);
			fnew.simplify();
			return fnew;
		}

		///// Operator overload
		Fraction operator+(Fraction &f2) const{
			int lcm = denominator * f2.denominator;
			int x = lcm / denominator;
			int y = lcm / f2.denominator;

			int num = x * numerator + (y * f2.numerator);

			// numerator = num;
			// denominator = lcm;
			Fraction fnew(num, lcm);
			fnew.simplify();
			return fnew;
		}

		void multiply(Fraction const &f2) {
			numerator = numerator * f2.numerator;
			denominator = denominator * f2.denominator;

			simplify();
		}

		Fraction operator*(Fraction const &f2) const{
			int numerator = this -> numerator * f2.numerator;
			int denominator = this -> denominator * f2.denominator;

			Fraction fnew(numerator, denominator);
			fnew.simplify();
			return fnew;
		}

		bool operator==(Fraction const &f2) const {
			return (numerator == f2.numerator && denominator == f2.denominator);
		}

		///overloading pre-increment
		Fraction& operator++(){
			numerator = numerator + denominator;
			simplify();
			return *this;
		}

		//Overloading post-increment
		Fraction operator++(int){
			Fraction fnew(numerator, denominator);
			numerator = numerator + denominator;
			simplify();
			fnew.simplify();
			return fnew;
		}

		//Overloafing += operator
		Fraction& operator+=(Fraction const &f2){
			int lcm = denominator * f2.denominator;
			int x = lcm / denominator;
			int y = lcm / f2.denominator;

			int num = x * numerator + (y * f2.numerator);

			numerator = num;
			denominator = lcm;
			simplify();
			return *this;
		}
};
