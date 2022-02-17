#include <iostream>
using namespace std;
void applyAll(int arr[], int size1, int arr1[], int size2);
int main() {
	int arr[]{ 1,2,3,4,5 };
	int arr1[]{ 10,20,30 };
	int size1 = sizeof(arr) / sizeof(arr[0]);
	int size2 = sizeof(arr1) / sizeof(arr1[0]);
	applyAll(arr, size1, arr1, size2);
	return 0;
}
void applyAll(int arr[], int size1, int arr1[], int size2) {
	int size = size1 * size2;
	int* ara_ara = new int[size];
	for (int i = 0; i < size2; i++) {
		for (int j = 0; j < size1; j++) {
			ara_ara[j + (size1 * i)] = arr1[i] * arr[j];
		}
	}
	cout << "First array ";
	cout << "{ ";
	for (int i = 0; i < size1; i++) {
		cout << arr[i];
		cout << " ";
	}
	cout << "}" << endl;
	cout << "Second array ";
	cout << "{ ";
	for (int i = 0; i < size2; i++) {
		cout << arr1[i];
		cout << " ";
	}
	cout << "}" << endl;
	cout << "Resultant array ";
	cout << "{ ";
	for (int i = 0; i < size; i++) {
		cout << ara_ara[i];
		cout << " ";
	}
	cout << "}";
	delete[] ara_ara;
	cout << endl;
}
