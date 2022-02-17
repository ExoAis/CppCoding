#include <iostream>
#include "bankAccount.h"
#include <string>
using namespace std;

bankAccount::bankAccount() {
	this->owner = "None";
	this->balance = 0;
}
bankAccount::bankAccount(string owner) {
	this->owner = owner;
	this->balance = 0;
}
bankAccount::bankAccount(string owner, int balance) {
	this->owner = owner;
	if (balance <= 0) {
		cout << "Enter a valid balance greater than 0" << endl;
		cout << "The balance is currently " << balance <<" in " << owner << "'s account" << endl;
	}
	else {
		this->balance = balance;
	}
}
void bankAccount::deposit(int amount) {
	if (amount <= 0) {
		cout << "Enter a valid amount" << endl;
		cout << "The balance in " << owner << "'s account is still " << balance << endl;
		
	}
	else {
		balance = balance + amount;
	}
}
void bankAccount::withdraw(int amount) {
	if (amount <= 0 || amount > balance) {
		cout << "Enter a valid amount" << endl;
		cout << "The balance in " << owner << "'s account is still " << balance << endl;
		
	}
	else {
		balance = balance - amount;
	}
}
string bankAccount::getOwner() const {
	return owner;
}
int bankAccount::getBalance() const {
	return balance;
}
bankAccount::~bankAccount() {
	cout << "Destructor called" << endl;
}
