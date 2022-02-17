#include "Dog.h"
#include <string>
#include <iostream>
using namespace std;

int main() {
	Dog* myDogPointer = new Dog("Beaver", "German Shepherd");
	Dog* yourDogPointer = new Dog("Harry", "Golden Retriever");
	cout << "By arrow member access" << endl;
	cout << myDogPointer->getName() << " - " << myDogPointer->getBreed() << endl;
	cout << yourDogPointer->getName() << " - " << yourDogPointer->getBreed() << endl;
	cout << "By dereference and dot operator" << endl;
	cout << (*myDogPointer).getName() << " - " << (*myDogPointer).getBreed() << endl;
	cout << (*yourDogPointer).getName() << " - " << (*yourDogPointer).getBreed() << endl;
	delete myDogPointer;
	delete yourDogPointer;
	myDogPointer = nullptr;
	yourDogPointer = nullptr;
	return 0;
}