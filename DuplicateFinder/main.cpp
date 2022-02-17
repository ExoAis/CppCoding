#include <iostream>
using namespace std;
void dupliFinder(char w[]);
int main() {
	char s[100];
	cout << "Enter the character array" << endl;
	cin >> s;
	dupliFinder(s);
	return 0;
}
void dupliFinder(char w[]) {
	int size = strlen(w);
	int count = 1;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (w[i] == w[j]) {
				memmove(&w[j], &w[j + 1], size - j - 1);
				count++;
				size--;
				j = j - 1;
				continue;
			}
		}
		if (count != 1) {
			cout << endl;
			cout << w[i] << " occurs " << count << " times." << endl;
		}
		count = 1;
	}
}