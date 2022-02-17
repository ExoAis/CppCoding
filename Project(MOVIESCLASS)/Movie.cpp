#include "Movie.h"
#include <string>
#include <iostream>
using namespace std;

Movie::Movie(string name, string rating, int watched)
	:name{ name }, rating{ rating }, watched{ watched }{};
void Movie::setName(string name) {
	this->name = name;
}
void Movie::setRating(string rating) {
	this->rating = rating;
}
void Movie::setWatched(int watched) {
	this->watched = watched;
}
void Movie::incrementWatched() {
	watched++;
}
string Movie::getName() const {
	return name;
}
string Movie::getRating() const {
	return rating;
}
int Movie::getWatched() const {
	return watched;
}
void Movie::display() const {
	cout << name << "  " << rating << "  " << watched << endl;
}
Movie::~Movie() {}
