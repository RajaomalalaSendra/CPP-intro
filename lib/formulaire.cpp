// The simple formulaire in cpp

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main () 
{
	// creation of all variables
	int age, identityCard;
	string getting, name, living, origin, nationality;

	//all the formulaire for today;
	cout << "In this we are testing a simple formulaire" << endl;
	//to get the name
	cout << "NAME: ";
	getline (cin, name);
	// to get the adress
	cout << "ADRESS: ";
	getline (cin, living);
	// To get the age
	cout << "AGE: ";
	getline (cin, getting);
	stringstream (getting) >> age;
	// To get the origin of the person
    cout << "ORIGIN: ";
    getline (cin, origin);
    // to get the nationality of the person
    cout << "NATIONALITY: ";
    getline (cin, nationality);
    // to get the cin of the person
    cout << "CIN: ";
	getline (cin, getting);
	stringstream (getting) >> identityCard;
	cout << "Thank you very much for test ing the whole program.";
	return 0;
}