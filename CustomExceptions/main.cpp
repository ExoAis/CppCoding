#include <iostream>
#include <stdexcept>
#include "AngryCatException.h"
using namespace std; 
void angryKitty(int numTreats);
int main() {
	int treats = 0;
	cout << "Enter treats' number" << endl;
	cin >> treats;
	try {
		angryKitty(treats);
	}
	catch (const AngryCatException& err) {
		cout << err.what() << endl;
	}
}
void angryKitty(int numTreats) {
	if (numTreats < 3) {
		throw AngryCatException();
	}
	else if (numTreats > 3 && numTreats < 6) {
		throw AngryCatException("Kitty is still a little angry");
	}
	else {
		cout << "Yay! Kitty is happy" << endl;
	}
}