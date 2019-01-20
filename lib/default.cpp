// default variables in one function
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// The default function 
int divide (int a, int b=2)
{
	// creation of the variable r
	int r;
	r=a/b;
	return (r);
}
int main ()
{
	// the division
	cout << divide (12);
	cout << endl;
	cout << divide (20,4);
	return 0;
}