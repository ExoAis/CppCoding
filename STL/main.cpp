#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main() {
	queue<string> myNames;
	myNames.push("John");
	myNames.push("Sally");
	myNames.push("Bob");
	myNames.push("Sam");
	myNames.push("Ali");
	myNames.push("Karen");

	while (!myNames.empty()) {
		cout << myNames.front() << endl;
		myNames.pop();
	}
	cout << endl;
	if (myNames.empty()) {
		cout << "The queue is empty!" << endl;
	}
	else {
		cout << "The queue is not empty!" << endl;
	}
	return 0;
}
