// break statement in cpp

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
	//for loop
	int i;
	cout << "Enter a number you want to iterate > ";
	cin >> i;
	for (int n=i; n > 0; n--) {
		if (n <= 3)
		{
			break;
		}
		cout << n << ", ";
	}
	cout << "We've just finished it. BOOMM!";
	return 0;		
}