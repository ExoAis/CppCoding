#include <iostream>
#include <algorithm>
#include <chrono>
using namespace std;

int main() {
	int N;
	int sum = 0;
	cout << "Enter number." << endl;
	cin >> N;
	for (int i = 0; i <= N; i++) {
		sum += i;
			if (sum == N) {
				cout << "Number is triangular" << endl;
				return 0;
			}
			else if (sum > N) {
				cout << "Number is not triangular" << endl;
				return 0;
			}
	}
}