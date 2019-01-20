// goto function in the for loop of cpp

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
	//declaring the variables
	int i;
	string s;
	//All about the iteration;
	cout << "Enter a number you want to iterate > ";
	getline (cin, s);
	stringstream (s) >> i;
	// for loop with the continue and break
	int n=i;
    loop:
	cout << n << ", ";
    n--;
    if (n>0) goto loop;
    // When we want to go out of th code
	cout << "We've just finished it. BOOMM!";
	return 0;		
}