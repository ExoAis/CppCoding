#include "Pizza.h"
#include<iostream>
#include<vector>
#include<string>
using namespace std;
Pizza::Pizza(string name, int diameter, int cost) {
		this->name = name;
		this->diameter = diameter;
		this->cost = cost;
		toppings.push_back("Cheese");
}
void Pizza::addToppings(string topping) {
	toppings.push_back(topping);
}
int Pizza::getCost() const {
	return cost;
}
string Pizza::getName() const {
	return name;
}
int Pizza::getDiameter() const {
	return diameter;
}
void Pizza::printToppings() const  {
	for (string topping : toppings) {
		cout << "\t" << topping << endl;
	}
}
