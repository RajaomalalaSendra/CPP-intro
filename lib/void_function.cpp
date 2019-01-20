// function with void

#include <iostream>
using namespace std;

// The void prevnext
void prevnext (int x, int& prev, int& next)
{
	prev = x-1, next = x+1;
	//to show x, y the previous and z the next
	cout << "x = " <<  x << endl;
	cout << "The previous is: " << prev << endl;
	cout << "The next is: " << next << endl; 
}
// the main program
int main ()
{
	// declaring the variables
	int x, y, z;
	string mynumber;
	// using the prevnext
	cout << "Enter one number: ";
	cin >> x;
	prevnext (x, y, z);
	return 0;
}