#include "Person.h"
#include <string>
#include <stdexcept>
using namespace std;

Person::Person(string name) {
	setName(name);
}
string Person::getName() const {
	return name;
}
void Person::setName(string name) {
	if (name != "Darab") {
		this->name = name;
	}
	else {
		throw runtime_error("Darab? That guy is too sexy for an object");
	}
}

