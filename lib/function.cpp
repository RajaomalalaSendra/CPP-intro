// create a function in cpp

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// creation of the addition , multiplication, substract and division
// addition
int addition (int a, int b)
{
	// creation of the calculation
	cout << "a + b = " << a + b;
}
// substract
int substract (int a, int b)
{
	// calculation of the substraction
	cout << "a - b = " << a - b;
}
// multiplication
int multiplication (int a, int b)
{
	// the multiplication
	cout << "a * b = " << a * b;
}
// division
int division (int a, int b)
{
	// the division
	cout << "a / b = " << a / b;
}
// the main of our program
int main () 
{
	// Declaration of all our variables
	int a, b, c;
	string mystring;
	// creation of our program
	while (true)
	{
		cout << "1.addition\t2.substract\t3.multiplication\t4.division" << endl;
		getline (cin, mystring);
		stringstream (mystring) >> c;
		switch (c) {
			// addition
			case 1:
			    cout << "Enter a: ";
			    getline (cin, mystring);
				stringstream (mystring) >> a;
				cout << "Enter b: ";
			    getline (cin, mystring);
				stringstream (mystring) >> b;
				addition(a, b);
				break;
			// substraction
			case 2:
				cout << "Enter a: ";
			    getline (cin, mystring);
				stringstream (mystring) >> a;
				cout << "Enter b: ";
			    getline (cin, mystring);
				stringstream (mystring) >> b;
				substract(a, b);
				break;
			// multiplication
			case 3:
				cout << "Enter a: ";
			    getline (cin, mystring);
				stringstream (mystring) >> a;
				cout << "Enter b: ";
			    getline (cin, mystring);
				stringstream (mystring) >> b;
				multiplication(a, b);
				break;
			// division
			case 4:
				cout << "Enter a: ";
			    getline (cin, mystring);
				stringstream (mystring) >> a;
				cout << "Enter b: ";
			    getline (cin, mystring);
				stringstream (mystring) >> b;
				division(a, b);
				break;
			default:
				cout << "You must choose 1, 2, 3 or 4";
				break;
		}
		break;
	}
		// Ending the program
		cout << "\nThank you for your support." << endl;
		return 0;
}