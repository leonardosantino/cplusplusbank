#include "SavingAccount.hpp"
#include <iostream>

SavingAccount::SavingAccount(std::string account_number, std::string agency_number, Holder holder): Account(account_number, agency_number, holder)
{
	
}

void SavingAccount::withdraw(double value)
{
	if (value > this->balance) {

		std::cout << "Insuffient balance";
		return;
	}
	std::cout << "Previous balance: " << this->balance;
	this->balance -= value;
	std::cout << " Withdraw: " << value << " fee: " << value * 0.05 << " Currently balance: " << this->balance;
}
