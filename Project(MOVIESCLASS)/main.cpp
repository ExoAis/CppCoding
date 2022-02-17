#include <string>
#include <vector>
#include <iostream>
#include "Movie.h"
#include "Movies.h"
using namespace std;
void incrementWatched(Movies& movies, string name) {
	if (movies.incrementWatched(name)) {
		cout << name << " watch incremented" << endl;
	}
	else {
		cout << name << " not found" << endl;
	}
}
void addMovies(Movies& movies, string name, string rating, int watched) {
	if (movies.addMovie(name, rating, watched)) {
		cout << name << " added" << endl;
	}
	else {
		cout << name << " already exists" << endl;
	}
}
int main() {
	Movies myMovies;
	myMovies.display();
	addMovies(myMovies, "Interstellar", "PG-13", 3);
	addMovies(myMovies, "Interstellar", "PG-13", 3);
	myMovies.display();
	addMovies(myMovies, "War of the Worlds", "PG-13", 5);
	myMovies.display();
	incrementWatched(myMovies, "Ice Age");
	return 0;
}