#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
	int num;
	int product;
	vector <int> yameteKudasai;
	ifstream infile;
	ofstream outfile;
	infile.open("Integers.txt");
	outfile.open("Output.txt");
	while (!infile.eof()) {
		infile >> num;
		product = num * 2;
		yameteKudasai.push_back(product);
	}
	for (int num : yameteKudasai) {
		outfile << num << endl;
	}
	infile.close();
	outfile.close();
	cout << "Done!" << endl;
	return 0;
}