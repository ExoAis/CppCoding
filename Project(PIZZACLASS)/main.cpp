#include<iostream>
#include "Pizza.h"
#include <vector>
using namespace std;
void printPizza(const Pizza& Pizza);
int main() {
	Pizza myPizza("Malai Boti", 12, 1200);
	Pizza sexyPizza("Steak Pizza", 12, 1300);
	sexyPizza.addToppings("Smoked Chicken");
	sexyPizza.addToppings("Boiled Olives");
	myPizza.addToppings("Sausages");
	myPizza.addToppings("Pepperoni");
	printPizza(myPizza);
	printPizza(sexyPizza);
}
void printPizza(const Pizza& Pizza) {
	cout << "Name: " << Pizza.getName() << endl << "Diameter: " << Pizza.getDiameter() << endl << "Cost in RS: " << Pizza.getCost() << endl << "Toppings: " << endl;
	Pizza.printToppings();
	cout << endl;
}