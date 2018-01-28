// In this program we are concentrating in getting about the readers of the books

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main ()
{
	// our variables
	int age;
	string getting, name, live;
	/* 
	* The whole code for this about the readers
	*/
	cout << "What is your full name?" << endl;
	getline (cin, name);
	cout << "How old are you?" << endl;
	getline (cin, getting);
	stringstream (getting) >> age;
	cout << "Where do you live?" << endl;
	getline (cin, live);
	cout << "So, you are: " << name << " and you are " << age << " years old." << endl;
	cout << "You live at " << live;
	cout << "\nThank you very much for testing my program.";
	return 0;
}