#ifndef MOVIES_H
#define MOVIES_H
#include <vector>
#include <string>
#include "Movie.h"
using namespace std;

class Movies {
	public:
		Movies();
		~Movies();
		bool addMovie(string name, string rating, int watched);
		bool incrementWatched(string name);
		void display() const;
	private:
		vector<Movie> movies;
};

#endif
