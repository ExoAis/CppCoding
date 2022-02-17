#include <iostream>
using namespace std;

int main() {
	double myDouble = 3.14;
	double* someDouble = &myDouble;
	cout << "The value is " << myDouble << endl;
	cout << "The memory address of value is " << someDouble << endl;
	cout << "Pointer after indirection is " << *someDouble << endl;
	*someDouble = 3.15;
	cout << "The value is now " << myDouble << endl;
	cout << "Now pointer after indirection is " << *someDouble << endl;
	return 0;
}