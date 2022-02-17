#include <iostream>
using namespace std;
int main() {
	int arr[8]{ 3,3,4,4,5,6,8,9 };
	//int arr[]{ 1,2,3,4,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int len1 = len-1;
	for (int i = 0; i < len; i++) {
		for (int j = len1; j >= 0; j--) {
			if (j > i) {
				if (arr[i] % 2 != 0 && arr[j] % 2 != 0) {
						swap(arr[i], arr[j]);
						len1 = j - 1;
						break;
				}
				else {
					continue;
				}
			}
			else {
				break;
			}
		}
	}
	for (int n : arr) {
			cout << n;
			cout << " ";
	}
	cout << endl;
	return 0;
}