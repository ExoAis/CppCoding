#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
	Rectangle rect1(3, 4);
	Rectangle rect2(40, 50);
	Rectangle rect3(50, 60);
	Rectangle rect4(3, 4);
	Rectangle resRect;
	Rectangle resRect1;
	resRect = rect1 + rect2;
	resRect1 = rect1 * rect2;
	cout << "Area is " << resRect.area() << " and perimeter is " << resRect.parameter() << endl;
	cout << "Area is " << resRect1.area() << " and perimeter is " << resRect1.parameter() << endl;
	cout << "Is Rect1 equal to Rect4? " << boolalpha << (rect1 == rect4) << endl;
	cout << "Is Rect1 not equal to Rect4? " << boolalpha << (rect1 != rect4) << endl;
	cout << "Is Rect1 not equal to Rect3? " << boolalpha << (rect1 != rect3) << endl;
	return 0;
}