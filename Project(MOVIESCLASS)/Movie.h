#ifndef MOVIE_H
#define MOVIE_H
#include <string>
using namespace std;

class Movie {
	public:
		Movie(string name, string rating, int watched);
		void setName(string name);
		void setRating(string rating);
		void setWatched(int watched);
		void incrementWatched();
		string getName() const;
		string getRating() const;
		int getWatched() const;
		void display() const;
		~Movie();
	private:
		string name;
		string rating;
		int watched;
};

#endif
