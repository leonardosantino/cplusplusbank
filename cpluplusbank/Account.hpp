#pragma once
#include "Holder.hpp"

class Account
{
public:
	static int account_id;

protected:
	std::string account_number;
	std::string agency_number;
	Holder holder;
	double balance;


public:
	Account(std::string account_number, std::string agency_number, Holder holder);
	virtual void withdraw(double value);
	void depoisit(double value);
	void transfer(double value, Account& account);
	double getBalance();
	Holder getHolder();

};
