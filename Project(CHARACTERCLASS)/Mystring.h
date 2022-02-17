#ifndef MYSTRING_H
#define MYSTRING_H
#include <iostream>
using namespace std;
class Mystring {
	friend ostream& operator<<(ostream& os, const Mystring& obj);
	friend istream& operator>>(istream& in, Mystring& obj);
	public:
		Mystring();
		Mystring(const char* s);
		Mystring(const Mystring& source);
		Mystring(Mystring&& source) noexcept;
		int getLength();
		const char* getString();
		const void display();
		Mystring& operator=(const Mystring& rhs);
		Mystring& operator=(Mystring&& rhs) noexcept;
		Mystring operator+(const Mystring& rhs) const;
		bool operator!=(const Mystring& rhs) const;
		bool operator==(const Mystring& rhs) const;
		Mystring operator-() const;
		bool operator<(const Mystring& rhs) const;
		bool operator>(const Mystring& rhs) const;
		Mystring operator+=(const Mystring& rhs) const;
		Mystring operator*(const int& num) const;
	private:
		char* str;
};
#endif