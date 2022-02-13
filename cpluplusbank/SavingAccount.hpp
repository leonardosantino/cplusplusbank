#pragma once
#include "Account.hpp"

class SavingAccount final: public Account
{
public:
	SavingAccount(std::string account_number, std::string agency_number, Holder holder);

	void withdraw(double value) override;
};
