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
	float balance;

public:
	Account(std::string account_number, std::string agency_number, Holder holder);
	void withdraw(float value);
	void depoisit(float value);
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

void Account::withdraw(float value)
{
	if (value > this->balance) {
		
		cout << "Insufiente balance";
		return;
	}

	this->balance -= value;
}

void Account::depoisit(float value)
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

Holder Account::getHolder()
{
	return this->holder;
}
```
