#include <iostream>
using namespace std;
bool validTwist(char w[], char s[]);
int main() {
	char word1[100];
	char word2[100];
	cout << "Enter original word" << endl;
	cin >> word1;
	cout << "Enter derived word" << endl;
	cin >> word2;
	cout << endl;
	if (validTwist(word1, word2)) {
		cout << "Word is valid" << endl;
	}
	else if (!validTwist(word1, word2)) {
		cout << "Word is invalid" << endl;
	}
	return 0;
}
bool validTwist(char w[], char s[]) {
	int size1 = strlen(w);
	int size2 = strlen(s);
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (size1 >= size2 && s[j] == w[i]) {
				memmove(&s[j], &s[j + 1], size2 - j - 1);
				size2--;
				break;
			}
		}
	}
	if (size2 == 0) {
		return true;
	}
	else {
		return false;
	}
}