// break statement in cpp

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
	for (int n=i; n > 0; n--) {
		if (n % 2 == 1)
		{
			continue;
		}
		if (n == 3)
		{
			break;
		}
		cout << n << ", ";
	}
	cout << "We've just finished it. BOOMM!";
	return 0;		
}