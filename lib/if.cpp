// condition if and else if and else in cpp

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
	// declaring the variables
	int a (0), b (0);
	string mynumber;

	// entering a and b then we need to compare it
	cout << "Enter the a: ";
	getline (cin, mynumber);
	stringstream (mynumber) >> a;
	cout << "Enter the b: ";
	getline (cin, mynumber);
	stringstream (mynumber) >> b;
	// comparison of a and b
	if (a == b)
		cout << "a is equal to b";
	else if (a > b)
		cout << "a is greater than b";
	else
		cout << "a is lesser than b";
}