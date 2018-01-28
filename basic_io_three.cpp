/*
* This is the third input and output of our learning cpp for today;
* using stringstream by calling the #include <sstream>
*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main () 
{
	// Decalring all the variables;
	float price = 0;
	int quantity = 0;
	string mystring;
	// adding the price, the quantinty and the total of it;
	cout << "Price of it: " << endl;
	getline (cin, mystring);
	stringstream (mystring) >> price;
	cout << "Quantities of it: " << endl;
	getline (cin, mystring);
	stringstream (mystring) >> quantity;
	cout << "The total is: " << price * quantity << endl;
	return 0;
}