#include "Complex.h"

int main(){

	Complex numSet1 (2,3);
	Complex numSet2 (4,-2);
	Complex endNumSet;

	
	cout << "\nNumber Set 1: ";
   	numSet1.toString();//toString called to show first num set 
   	cout << endl;

	cout << "Number Set 2: ";
  	numSet2.toString();
	cout<< endl;
	
	//Overloading Addition Operator 
	cout << "\nNumSet1 + NumSet2 = ";
   	endNumSet = numSet1 + numSet2;
   	endNumSet.toString();
	cout << endl;
	
	//Overloading Multiplication Operator 
	cout << "NumSet1 * NumSet2 = ";
   	endNumSet = numSet1* numSet2;
   	endNumSet.toString();
	cout<< endl;

	//Overloading Equals Operator 
	cout<< "Equality of Number Sets: ";
	cout<< (numSet1 == numSet2);
	cout << endl;
	
}
	

