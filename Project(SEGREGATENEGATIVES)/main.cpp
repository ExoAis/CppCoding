#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int a[]{ -5, 7, -3, -4, 9, 10, -1, 11 };
	int size = sizeof(a) / sizeof(a[0]);
	int* temp = new int[size];
	int num = 0;
	for (int i = 0; i < size; i++) {
		if (a[i] >= 0) {
			temp[num] = a[i];
			num++;
		}
	}
	for (int i = 0; i < size; i++) {
		if (a[i] < 0) {
			temp[num] = a[i];
			num++;
		}
	}
	num = 0;
	for (int i = 0; i < size; i++) {
		a[num] = temp[i];
		num++;
	}
	for (auto num : a) {
		cout << num << "  ";
	}
	delete[] temp;
	temp = nullptr;
}