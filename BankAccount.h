#pragma once
#include<string>
using namespace std;
class BankAccount {
private:
	string stk;
	string name;
	double sodu;
public:
	BankAccount(string stk, string name, double sodu);
	string getname() const;
	double getsodu() const;
	bool deposit(double amount);
	bool withdraw(double amount);
	void display() const;
};