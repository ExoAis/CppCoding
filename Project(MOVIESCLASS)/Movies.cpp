#include "Movie.h"
#include "Movies.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

Movies::Movies() {};
Movies::~Movies() {};
bool Movies::addMovie(string name, string rating, int watched) {
	for (const Movie& movie : movies) {
		if (movie.getName() == name) {
			return false;
		}
	}
	Movie temp{ name,rating,watched };
	movies.push_back(temp);
	return true;
}
bool Movies::incrementWatched(string name) {
	for (Movie& movie : movies) {
		if (movie.getName() == name) {
			movie.incrementWatched();
			return true;
		}
	}
	return false;
}
void Movies::display() const {
	if (movies.size() == 0) {
		cout << "Sorry, no movies to display." << endl;
	}
	else {
		cout << "/n==========================" << endl;
		for (auto movie : movies) {
			movie.display();
		}
		cout << "/n==========================" << endl;
	}
}