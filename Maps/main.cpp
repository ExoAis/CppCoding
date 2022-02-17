#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	map<string, string> contacts;
	contacts["Darab"] = "0313-4374801";
	contacts["Fariha"] = "0315-4913752";
	contacts["Ahsan"] = "0300-4432704";
	for (/*pair<string, string>*/auto element : contacts) {
		cout << element.first << " = " << element.second << endl;
	}
	return 0;
}