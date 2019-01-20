// switch case in cpp

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main () 
{
	//declaring the variables
	int x;
	string s;
	//All about the iteration;
	cout << "Enter a number you want to see > ";
	getline (cin, s);
	stringstream (s) >> x;
	// Block of instructions for different possible values for the expression being evaluated. For example:
	switch (x) {
		case 1:
		case 2:
		case 3:
			cout << "x is 1, 2 or 3";
			break;
		default:
			cout << "x is not 1, 2 nor 3";
	}
}