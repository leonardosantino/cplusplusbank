#pragma once
#include <string>

class Account
{
public:
	static int account_id;
private:
	std::string account_number;
	std::string agency_number;
	std::string account_owner;
	std::string cpf;
	float balance;

public:
	Account(std::string account_number, std::string agency_number, std::string account_owner, std::string cpf);
	void withdraw(float value);
	void depoisit(float value);
	float getBalance();
	void setAccountOwner(std::string name);
	std::string getAccoutOwner();
};
