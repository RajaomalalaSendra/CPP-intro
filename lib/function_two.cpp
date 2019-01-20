// the second function in the cpp to create a reference

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int duplicates (int& a, int& b, int& c) 
{
	// creation of the simple variables
	a *= 2;
	b *= 2;
	c *= 2;
}
int main ()
{
	// declaring of our variable
	int x = 3, y = 4, z = 5;
	duplicates(x, y, z);
	cout << "x=" << x << ", y=" << y << ", z=" << z;
	return 0;
}