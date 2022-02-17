#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

Player::Player(string name, Race race, int hitPoints, int magicPoints) {
	this->name = name;
	this->race = race;
	this->hitPoints = hitPoints;
	this->magicPoints = magicPoints;
}
void Player::setName(string name) {
	this->name = name;
}
void Player::setRace(Race race) {
	this->race = race;
}
void Player::setHitPoints(int hitPoints) {
	this->hitPoints = hitPoints;
}
void Player::setMagicPoints(int magicPoints) {
	this->magicPoints = magicPoints;
}
string Player::getName() const {
	return name;
}
Race Player::getRace() const {
	return race;
}
int Player::getHitPoints() const {
	return hitPoints;
}
int Player::getMagicPoints() const {
	return magicPoints;
}
string Player::whatRace() const {
	string result = "";
	if (race == Human) {
		result = "Human";
	}
	else if (race == Elf) {
		result = "Elf";
	}
	else if (race == Dwarf) {
		result = "Dwarf";
	}
	else if (race == Orc) {
		result = "Orc";
	}
	else if (race == Troll) {
		result = "Troll";
	}
	return result;
}