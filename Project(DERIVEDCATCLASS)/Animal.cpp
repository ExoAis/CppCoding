#include <string>
#include "Animal.h"
using namespace std;

Animal::Animal() {
	this->name = "Tiger";
	this->weight = 78.85;
}
Animal::Animal(string name, double weight) {
	this->name = name;
	this->weight = weight;
}
void Animal::setName(string name) {
	this->name = name;
}
void Animal::setWeight(double weight) {
	this->weight = weight;
}
string Animal::getName() const {
	return name;
}
double Animal::getWeight() const {
	return weight;
}
