#include <iostream>
#include <stdexcept>
using namespace std;
void processPositive(int num);
void doSomething(int num);
int main() {
	int input;
	try {
		cout << "Enter the number" << endl;
		cin >> input;
		cout << endl;
		doSomething(input);
		cout << "Number is successfully processed" << endl;
	}
	catch (const invalid_argument& err) {
		cout << "Number is not in the range of 0-100" << endl;
		cerr << err.what() << endl;
	}
}
void processPositive(int num) {
	cout << "Welcome to the processPositive!" << endl;
	if (num < 100 && num >= 0) {
		cout << "processPositive can process the number!" << endl;
	}
	else {
		cout << "There is an exception" << endl;
		throw invalid_argument("Please enter a number from 0 to 100");
	}
}
void doSomething(int num) {
	try {
		processPositive(num);
		cout << "doSomething can also process the number!" << endl;
	}
	catch (const invalid_argument& err) {
		cout << "Please enter a valid number" << endl;
		throw;
	}
}
