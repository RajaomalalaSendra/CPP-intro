// the calculation and the comparison:

#include <iostream>
using namespace std;

int main () 
{
	// The all integer variables inside the main
	int a, b, c;
	a = 34;
	b = 23;
	c = (a > b) ? a : b;
	// the output of c
	cout << c << endl;
	return 0; 
}