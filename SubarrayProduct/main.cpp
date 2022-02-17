#include <iostream>
#include <vector>
using namespace std;
int prod(vector<int> myVec, int n);
int main() {
	vector<int> myVec{ 6, -3, -10, 0, 2 };
	int N = myVec.size();
	int largest = prod(myVec, N);
	cout << "Largest product of subarray is " << largest << endl;
	return 0;
}
int prod(vector<int> myVec, int n) {
	vector<int> resultVec;
	int product = 1;
	int product1 = 1;
	int product2 = 1;
	for (int i = 0; i < n; i++) {
		if (myVec[i] > 0) {
			product = myVec[i];
			product2 = product2 * myVec[i];
			resultVec.push_back(product2);
			product = product * product1;
			resultVec.push_back(product);
		}
		else if (myVec[i] < 0) {
			if (myVec[i + 1] < 0) {
				product1 = myVec[i + 1];
			}
			product1 = product1 * myVec[i];
			resultVec.push_back(product1);
			product2 = 1;
		}
		else if (myVec[i] == 0) {
			
		}
	}
	int max = resultVec[0];
	for (size_t i = 0; i < resultVec.size(); i++) {
		if (max < resultVec[i]) {
			max = resultVec[i];
		}
	}
	cout << max << endl;
	if (max > 0) {
		return max;
	}
	else {
		return 0;
	}
}