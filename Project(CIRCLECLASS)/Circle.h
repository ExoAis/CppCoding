#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
	public:
		Circle();
		Circle(double radius);
		double getRadius() const;
		void setRadius(double radius);
		double area() const;
		double circumference() const;
	private:
		double radius;
};

#endif