#include <iostream>
#include <cctype>
#include <cstring>
#include "Mystring.h"
using namespace std;
Mystring::Mystring()
	:str{ nullptr } {
	str = new char[1];
	*str = '\0';
}
Mystring::Mystring(const char* s) 
	: str{ nullptr } {
	if (s == nullptr) {
		str = new char[1];
		*str = '\0';
	}
	else {
		str = new char[strlen(s) + 1];
		strcpy(str, s);
	}
}
Mystring::Mystring(const Mystring& source) 
	:str{ nullptr } {
	str = new char[strlen(source.str) + 1];
	strcpy(str, source.str);
	cout << "Copy Constructor called" << endl;
}
Mystring::Mystring(Mystring&& source) noexcept
	: str (source.str) {
	source.str = nullptr;
	cout << "Move Constructor called" << endl;
}
int Mystring::getLength() {
	return strlen(str);
}
const char* Mystring::getString() {
	return str;
}
const void Mystring::display() {
	cout << getString() << " : " << getLength() << endl;
}
Mystring& Mystring::operator=(const Mystring& rhs) {
	if (this == &rhs) {
		return *this;
	}
	delete[] str;
	str = new char[strlen(rhs.str) + 1];
	strcpy(str, rhs.str);
	return *this;
}
Mystring& Mystring::operator=(Mystring&& rhs) noexcept {
	if (this == &rhs) {
		return *this;
	}
	delete[] str;
	str = rhs.str;
	rhs.str = nullptr;
	return *this;
}
Mystring Mystring::operator+(const Mystring& rhs) const {
	char* buff = new char[strlen(str) + strlen(rhs.str) + 1];
	strcpy(buff, str);
	strcat(buff, rhs.str);
	Mystring object{ buff };
	delete[] buff;
	return object;
}
bool Mystring::operator!=(const Mystring& rhs) const {
	return (!strcmp(str, rhs.str) == 0);
}
bool Mystring::operator==(const Mystring& rhs) const {
	return (strcmp(str, rhs.str) == 0);
}
Mystring Mystring::operator-() const {
	char* buff = new char[strlen(str) + 1];
	strcpy(buff, str);
	for (size_t i = 0; i < strlen(buff); i++) {
		buff[i] = tolower(buff[i]);
	}
	Mystring object{ buff };
	delete[] buff;
	return object;
}
ostream& operator<<(ostream& os, const Mystring& obj) {
	os << obj.str << endl;
	return os;
}
istream& operator>>(istream& in, Mystring& obj) {
	char* buff = new char[1000];
	cout << "Enter the name" << endl;
	in >> buff;
	obj = Mystring{ buff };
	delete[] buff;
	return in;
}
bool Mystring::operator<(const Mystring& rhs) const {
	return (str < rhs.str);
}
bool Mystring::operator>(const Mystring& rhs) const {
	return (str > rhs.str);
}
Mystring Mystring::operator+=(const Mystring& rhs) const {
	strcat(str, rhs.str);
	return str;
}
Mystring Mystring::operator*(const int& num) const {
	if (num == 0) {
		char* buff = new char[1];
		*buff = '\0';
		Mystring object{ buff };
		delete[] buff;
		return object;
	}
	else {
		char* buff = new char[(strlen(str) * num) + 1];
		strcpy(buff, str);
		for (size_t i = 0; i < num - 1; i++) {
			strcat(buff, str);
		}
		Mystring object{ buff };
		delete[] buff;
		return object;
	}
}