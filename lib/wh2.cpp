// do while loop in cpp

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
	// declaring the variables
	unsigned long n (0);
	int i (0);
	string mystring;
	// using the do while loop
	do {
		cout << "Enter a number (0 to end): ";
		getline (cin, mystring);
		stringstream (mystring) >> n;
		cout << "You've entered: " << n << endl;
		++i;

	} while (n != 0);
	// ending the program;
	if (i > 1)
		cout << "Thank you very much for entering all these numbers";
	if (i == 1)
		cout << "Thank you very much for entering that one number";
	return 0;
}