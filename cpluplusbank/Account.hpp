#pragma once
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
	double getBalance();
	Holder getHolder();
};
