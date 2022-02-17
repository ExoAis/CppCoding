#include <iostream>
#include <string>
#include "Player.h"
using namespace std;
class Warrior : public Player {
	public:
		Warrior(string name, Race race) : Player(name, race, 200, 0) {
			
		}
		string attack() const {
			return "I will destroy you with my sword, foul demon!";
		}
};
class Priest : public Player {
	public:
		Priest(string name, Race race) : Player(name, race, 100, 200) {

		}
		string attack() const {
			return "I will assault you with Holy Wrath!";
		}
};
class Mage : public Player {
public:
	Mage(string name, Race race) : Player(name, race, 150, 150) {

	}
	string attack() const {
		return "I will crush you with the power of my arcane missiles!";
	}
};