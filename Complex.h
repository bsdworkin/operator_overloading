#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>
#include <cmath>

using namespace std;

class Complex
{

	private:
		double real;
		double imag;

	public:
		Complex();
		Complex(double a, double b);
		Complex operator + (Complex &var) const;
		Complex operator * (Complex &var) const;
		bool operator == (Complex &var) const;
		void toString() const;
};

#endif

		
