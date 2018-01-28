// our second operators

#include <iostream>
using namespace std;

int main () 
{
	int a, b=3, c=5, d(3);
	a = 34;
	b += a;
	c -= b;
	d *= c;

	// all the four  outputs
	cout << "a:" << a << endl;
	cout << "b:" << b << endl;
	cout << "c:" << c << endl;
	cout << "d:" << d << endl;
    return 0;
}