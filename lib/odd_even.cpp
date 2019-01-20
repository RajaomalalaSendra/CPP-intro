// odd or even in cpp
#include <iostream>
using namespace std;

void odd (int i);
void even (int i);

int main ()
{
	int i;
	do {
		cout << "Type a number (0 to exit): ";
		cin >> i;
		odd (i);
	} while (i!=0);
	return 0;
}
// Declaring the odd function after the main function
void odd (int a)
{
	if ((a%2)!=0) cout << "Number is odd.\n";
	else even (a);
}
// declaring the even function after the main function
void even (int a)
{
	if ((a%2)==0) cout << "Number is even.\n";
	else odd (a);
}