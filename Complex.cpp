#include "Complex.h"

Complex:: Complex(){
	real = 0.0;
	imag = 0.0;
}

Complex::Complex(double a, double b){
	real = a; 
	imag = b;
}

Complex Complex :: operator + (Complex &var) const{
	Complex c;
	c.real = this -> real + var.real;
	c.imag = this -> imag + var.imag;
	return c;
}

Complex Complex :: operator * (Complex &var) const{
	Complex c; 
	c.real = (this-> real * var.real) - (this->imag * var.imag);
	c.imag = (this-> imag * var.real) +(this->real * var.imag);
	return c;
}

bool Complex:: operator == (Complex &var) const{

	if(this-> real == var.real && this-> imag == var.imag){
		return true;
	}
	else{
		return false;
	}
}

void Complex :: toString() const{
	if (imag < 0){
		cout << real << " - " << abs(imag) << "i";
	}
  	else if (imag == 0){
		cout << real;
	}
   	else{
	        cout << real << " + " << imag << "i";
	}
}
	
	




