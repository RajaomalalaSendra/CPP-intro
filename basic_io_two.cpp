/*
* input and output using string;
* getting the whole line by using the getline
*/

#include <iostream>
#include <string>
using namespace std;

int main ()
{
	// declaration of the variable
	string mystring;
	cout << "What is your name?" << endl;
	getline (cin, mystring);
	cout << "Hi!!! " << mystring << ".\n";
	cout << "What is your favorite manga?" << endl;
	getline (cin, mystring);
	cout << "Me also I like " << mystring << endl;
	return 0;

}