#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
using namespace std;

enum Race { Human, Elf, Dwarf, Orc, Troll };

class Player {
	public:
		Player(string name, Race race, int hitPoints, int magicPoints);
		void setName(string name);
		void setRace(Race race);
		void setHitPoints(int hitPoints);
		void setMagicPoints(int magicPoints);
		string getName() const ;
		Race getRace() const ;
		int getHitPoints() const ;
		int getMagicPoints() const ;
		string whatRace() const ;
		virtual string attack() const = 0;
	private:
		string name;
		int hitPoints;
		int magicPoints;
		Race race;
};

#endif
