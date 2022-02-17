#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
using namespace std;
void fillVector(vector<int>& myVec);
void printVector(vector<int>& myVec);
void countFives(vector<int>& myVec);
int main() {
	vector<int> myVector;
	fillVector(myVector);
	printVector(myVector);
	cout << endl;
	countFives(myVector);
	cout << "Replacing 5's with 101's" << endl;
	replace(myVector.begin(), myVector.end(), 5, 101);
	countFives(myVector);
	cout << endl;
	printVector(myVector);
	cout << endl << endl;
	/*for (size_t i = 0; i < myVector.size(); i++) {
		for (size_t j = 0; j < myVector.size(); j++) {
			if (myVector[i] == myVector[j] && j != i) {
				myVector.erase(myVector.begin() + j);
				j = 0;
			}
		}
	}*/
	sort(myVector.begin(), myVector.end());
	printVector(myVector);
	return 0;
}
void fillVector(vector<int>& myVec) {
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		int temp = rand() % 9 + 1;
		myVec.push_back(temp);
	}
}
void printVector(vector<int>& myVec) {
	for (auto num : myVec) {
		cout << num;
		cout << " ";
	}
	cout << endl;
}
void countFives(vector<int>& myVec) {
	int timeFives = count(myVec.begin(), myVec.end(), 5);
	cout << "Number of fives are " << timeFives << endl;
}