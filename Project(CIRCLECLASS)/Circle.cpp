#include "Circle.h"
using namespace std;
Circle::Circle() {
	this->radius = 1;
}
Circle::Circle(double radius) {
	this->radius = radius;
}
double Circle::getRadius() const {
	return radius;
}
void Circle::setRadius(double radius) {
	this->radius = radius;
}
double Circle::area() const {
	return 3.142 * radius * radius;
}
double Circle::circumference() const {
	return 2 * 3.142 * radius;
}