// our third operators in cpp

#include <iostream>
using namespace std;

int main ()
{
	// the B integer for all of this
	int B=3, A, C;
	A = ++B;
	C = B++;
	// the output of all of these
	cout << A << endl;
	cout << C << endl;
	cout << B << endl;
	return 0;
}