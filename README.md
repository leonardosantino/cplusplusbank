# cplusplusbank
Simple bank project with C++ using oop.

```c++
#pragma once
#include <string>
#include "Holder.hpp"

class Account
{
public:
	static int account_id;

private:
	std::string account_number;
	std::string agency_number;
	Holder holder;
	double balance;

public:
	Account(std::string account_number, std::string agency_number, Holder holder);
	void withdraw(double value);
	void depoisit(double value);
	void transfer(double value, Account& account);
	float getBalance();
	Holder getHolder();
};
```

```c++
#include "Account.hpp"
#include <iostream>
using namespace std;

int Account::account_id = 0;

Account::Account(std::string account_number, std::string agency_number, Holder holder) 
	: account_number(account_number), agency_number(agency_number), holder(holder), balance(0.0) {

	account_id++;
}

void Account::withdraw(double value)
{
	if (value > this->balance) {
		
		cout << "Insuffient balance";
		return;
	}

	this->balance -= value;
}

void Account::depoisit(double value)
{
	if (value < 0) {

		cout << "Type a number grather than zero";
		return;
	}

	this->balance += value;
}

float Account::getBalance()
{
	return this->balance;
}

void Account::transfer(double value, Account& account)
{
	if (value < 0) {

		cout << "Type a number grather than zero";
		return;
	}

	else if (value > this->balance) {

		cout << "Insuffient balance";
		return;
	}

	this->balance -= value;
	account.balance += value;
}

Holder Account::getHolder()
{
	return this->holder;
}
```
