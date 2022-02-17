#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;

class Animal {
public:
	Animal();
	Animal(string name, double weight);
	void setName(string name);
	void setWeight(double weight);
	string getName() const;
	double getWeight() const;
	virtual string makeNoise() const = 0;
	virtual string doEat() const = 0;
	//virtual void chaseMouse() const = 0;
private:
	string name;
	double weight;
};
#endif
