#include <iostream>
using namespace std;
int equilibrium_index(int arr[], int n);
int main() {
	int arr[]{ 7,-1,-5,2,4,-3,0 };
	cout << "Equilibrium index is " << equilibrium_index(arr, 7) << "." << endl;
	return 0;
}
int equilibrium_index(int arr[], int n) {
	int sum = 0;
	int sum1 = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
		for (int j = n - 1; j > i + 1; j--) {
			sum1 += arr[j];
		}
		if (sum == sum1) {
			return i + 1;
		}
		sum1 = 0;
	}
	return -1;
}
