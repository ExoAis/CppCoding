#include <iostream>
using namespace std;
int main() {
	const int ROWS = 4;
	const int COLS = 4;
	int a[ROWS][COLS]{
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	int size = sizeof(a) / sizeof(a[0][0]);
	int k = 0;
	int s = ROWS - 3;
	int count = 0;
	int count1 = 0;
	int count2 = ROWS;
	int count3 = 0;
	int count4 = count2;
	int count5 = count3;
	cout << a[0][0];
	count1++;
	for (int i = 1; i < ROWS; i++) {
		cout << endl;
		if (count != ROWS) {
			count = 0;
			i = k + 1;
			k = i;
		}
		if (count == ROWS) {
			s = ROWS - 3;
			i = k;
		}
		if ((count == ROWS) && (count2 - count3 < 0)) {
			count2 = count4 - 1;
			count3 = count5 + 1;
		}
		for (int j = 1; j <= COLS; j++) {
			if ((i != ROWS - 1 || j != COLS - 1) && (j - 1 <= k) && (count != ROWS)) {
				cout << a[j - 1][i] << "  ";
				i--;
				count++;
				count1++;
			}
			else if ((count == ROWS) && (count2 - count3 >= 0)) {
				if (size - count1 > 3) {
					s++;
					cout << a[s - 1][i] << "  ";
					i--;
					count3++;
				}
				else if (size - count1 <= 3) {
					s++;
					cout << a[s][i] << "  ";
					i--;
					count3++;
				}
				count1++;
				count2--;
			}
			else if (count1 == size - 1) {
				cout << endl;
				cout << a[ROWS - 1][COLS - 1] << endl;
				return 0;
			}
		}
	}
	return 0;
}