#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include<iostream>
#include<string>
using namespace std;
class bankAccount {
	public:
		bankAccount();
		bankAccount(string owner);
		bankAccount(string owner, int balance);
		void deposit(int amount);
		void withdraw(int amount);
		string getOwner() const;
		int getBalance() const;
		~bankAccount();
;	private:
		string owner;
		int balance;
};

#endif
