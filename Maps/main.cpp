#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
	map<string, string> contacts;
	contacts["Tifa"] = "0048204839";
	contacts["Aerith"] = "8593769951";
	contacts["Cloud"] = "0493867376";
	for (/*pair<string, string>*/auto element : contacts) {
		cout << element.first << " = " << element.second << endl;
	}
	return 0;
}
