// constant in cpp;

#include <iostream>
using namespace std;

#define PI 3.14159
#define NEWLINE '\n'

int main () 
{
	double r=5.0;
	double circle;
	
	circle = 2 * PI * r;
	
	// Output of calculation of the cirlcle
	cout << "The value of the circle is: " << circle;
	cout << NEWLINE;
	/*
	* output of the string
	*/
	cout << "The value of PI is:\t" << PI << endl;
	cout << "The constant is here in our idea " << NEWLINE;
	cout << "Then we can do something like this also." << endl;
	cout << "Thank you so much for seeing all of these." << endl;
	return 0;
}