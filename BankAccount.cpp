#include"BankAccount.h"
#include<iostream>
using namespace std;

BankAccount::BankAccount(string stk, string name, double sodu) {
	this->stk = stk;
	this->name = name;
	this->sodu = sodu;
}
string BankAccount::getname() const{
	return name;
}
double BankAccount::getsodu() const {
	return sodu;
}
bool BankAccount::deposit(double amount) {
	if (amount > 0) {	
		sodu = sodu + amount;
		return true;
	}
	return false;
}
bool BankAccount::withdraw(double amount) {
	if (amount > 0&&this->sodu>=amount) {
		sodu = sodu - amount;
		return true;
	}
	return false;
}
void BankAccount::display() const {
	cout << stk << " " << name << " " << sodu << endl;
}