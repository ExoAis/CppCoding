#ifndef PIZZA_H
#define PIZZA_H
#include <vector>
#include <string>
using namespace std;
class Pizza {
	public:
		Pizza(string name, int diameter, int cost);
		void addToppings(string topping);
		string getName() const;
		int getDiameter() const;
		int getCost() const;
		void printToppings() const;
	private:
		string name;
		int cost;
		int diameter;
		vector<string> toppings;
};

#endif
