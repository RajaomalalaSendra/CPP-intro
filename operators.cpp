// operators in cpp

#include <iostream>
using namespace std;

int main () 
{
	int a, b, c, d;
	a=2;
	b=13;
	a=b;
	b=3;
	c = a + b;
	d = c;
	d = 23;


	// seeing the value by using the cout:
	cout << "a:";
	cout << a << endl;
	cout << "b:" << b << endl;
	cout << "c:" << c << endl;
	cout << "d:" << d << endl;
	return 0;

}