#include "Player.h"
#include "Classes.cpp"
#include <string>
#include <iostream>
#include <vector>
using namespace std;
vector<Player*> myVec;
void setClass() {
	bool ask = false;
	Player* temp{ nullptr };
	int num;
	int num1;
	string name;
	while (!ask) {
		cout << "Which of the following would you like?" << endl;
		cout << "1 - Create a Warrior?" << endl;
		cout << "2 - Create a Priest?" << endl;
		cout << "3 - Create a Mage?" << endl;
		cout << "0 - Finish creating Player Characters?" << endl;
		cin >> num;
		if (num == 0) {
			break;
		}
		else if (num > 3 || num < 0) {
			cout << "Enter a valid number" << endl;
			continue;
		}
		cout << "What would you like to name your character?" << endl;
		cin >> name;
		if (num == 1) {
	   jump:cout << "Which race do you want?" << endl;
			cout << "1 - Human?" << endl;
			cout << "2 - Elf?" << endl;
			cout << "3 - Dwarf?" << endl;
			cout << "4 - Orc?" << endl;
			cout << "5 - Troll?" << endl;
			cin >> num1;
			if (num1 > 5 || num1 < 1) {
				cout << "Enter a valid number" << endl;
				goto jump;
			}
			else if (num1 == 1) {
				temp=new Warrior(name, Human);
			}
			else if (num1 == 2) {
				temp=new Warrior(name, Elf);
			}
			else if (num1 == 3) {
				temp=new Warrior(name, Dwarf);
			}
			else if (num1 == 4) {
				temp=new Warrior(name, Orc);
			}
			else if (num1 == 5) {
				temp=new Warrior(name, Troll);
			}
		}
		else if (num == 2) {
	  jump1:cout << "Which race do you want?" << endl;
			cout << "1 - Human?" << endl;
			cout << "2 - Elf?" << endl;
			cout << "3 - Dwarf?" << endl;
			cout << "4 - Orc?" << endl;
			cout << "5 - Troll?" << endl;
			cin >> num1;
			if (num1 > 5 || num1 < 1) {
				cout << "Enter a valid number" << endl;
				goto jump1;
			}
			else if (num1 == 1) {
				temp=new Priest(name, Human);
			}
			else if (num1 == 2) {
				temp=new Priest(name, Elf);
			}
			else if (num1 == 3) {
				temp=new Priest(name, Dwarf);
			}
			else if (num1 == 4) {
				temp=new Priest(name, Orc);
			}
			else if (num1 == 5) {
				temp=new Priest(name, Troll);
			}
		}
		else if (num == 3) {
	  jump2:cout << "Which race do you want?" << endl;
			cout << "1 - Human?" << endl;
			cout << "2 - Elf?" << endl;
			cout << "3 - Dwarf?" << endl;
			cout << "4 - Orc?" << endl;
			cout << "5 - Troll?" << endl;
			cin >> num1;
			if (num1 > 5 || num1 < 1) {
				cout << "Enter a valid number" << endl;
				goto jump2;
			}
			else if (num1 == 1) {
				temp=new Mage(name, Human);
			}
			else if (num1 == 2) {
				temp=new Mage(name, Elf);
			}
			else if (num1 == 3) {
				temp=new Mage(name, Dwarf);
				
			}
			else if (num1 == 4) {
				temp=new Mage(name, Orc);
			}
			else if (num1 == 5) {
				temp=new Mage(name, Troll);
			}
		}
		myVec.push_back(temp);
	}
}
void printClass (vector<Player*>& rectVect ) {
	cout << endl;
	for (Player* rectPtr : rectVect) {
		cout << "I'm a " << rectPtr->whatRace() << " and my name is " << rectPtr->getName() << " and my hitpoints are " << rectPtr->getHitPoints() << " and my magic points are " << rectPtr->getMagicPoints() << " and my attack is : " << rectPtr->attack() <<  endl;
	}
}
int main() {
	setClass();
	printClass(myVec);
	for (Player* rectPtr : myVec) {
		delete rectPtr;
		rectPtr = nullptr;
	}
	myVec.clear();
	return 0;
}