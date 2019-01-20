// while loop in cpp

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
	// here we are waiting for the number
	int n;
	string mystring;
	cout << "Enter the number you want to iterate > ";
	getline (cin, mystring);
	stringstream (mystring) >> n;
	// declaring the first while loop
	while (n > 0)
	{
		cout << n << ", ";
		--n;
	}

	// To finish it
	cout << "BOOOMM!!" << endl;
	return 0;
}