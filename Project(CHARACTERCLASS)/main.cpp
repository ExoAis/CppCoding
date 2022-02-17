#include <iostream>
#include "Mystring.h"
using namespace std;
int main() {
	Mystring Joey("Joey");
	Mystring larry{Joey};
	Mystring Darab("Darab");
	Mystring Hussain("Hussain");
	larry.display();
	Joey.display();
	cout << boolalpha << (larry == Joey) << endl;
	cout << boolalpha << (larry == Darab) << endl;
	cout << boolalpha << (larry != Joey) << endl;
	cout << boolalpha << (larry > Darab) << endl;
	cout << boolalpha << (larry < Darab) << endl;
	Mystring lowercase = -Darab;
	lowercase.display();
	Mystring concat = Darab + larry;
	cout << concat << endl;
	Mystring empty;
	cin >> empty;
	empty.display();
	larry = Darab;
	cout << larry << endl;
	Darab += Hussain;
	cout << Darab << endl;
	Hussain = Darab * 2;
	cout << Hussain << endl;
	larry = Darab * 3;
	cout << larry << endl;
	return 0;
}