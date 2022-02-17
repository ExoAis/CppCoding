#include <iostream>
#include <stdexcept>
#include "Person.h"
#include <String>
using namespace std;
int main() {
	Person Person1("Saad");
	cout << "The name of the person is " << Person1.getName() << endl;
	try {
		Person Person1("Saad");
		Person Person2("Darab");
		Person Person3("Sunaam");
		cout << "The name of the person is " << Person1.getName() << endl;
		cout << "The name of the person is " << Person2.getName() << endl;
		cout << "The name of the person is " << Person3.getName() << endl;
	}
	catch (const runtime_error& err) {
		cerr << err.what() << endl;
	}
	return 0;
}
