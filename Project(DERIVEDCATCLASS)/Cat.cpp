#include "Cat.h"
#include <iostream>
#include <string>
using namespace std;

Cat::Cat(string name, double weight) : Animal(name,weight) {

}
void Cat::chaseMouse() const {
	cout << "It's chasing a mouse!" << endl;
}
string Cat::makeNoise() const {
	return "Meow!";
}
string Cat::doEat() const {
	return "tasty kitty food.";
}