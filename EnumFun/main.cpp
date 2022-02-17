#include <iostream>
using namespace std;

int main() {
	enum Movement{UP, DOWN, LEFT, RIGHT, STANDING};
	Movement myMovement = STANDING;
	cout << myMovement << endl << endl;
	if (myMovement == 4) {
		cout << "Player is standing" << endl;
	}
	return 0;
}