#include "Account.hpp"
#include <iostream>
using namespace std;

int Account::account_id = 0;

Account::Account(std::string account_number, std::string agency_number, std::string account_owner, std::string cpf) 
	: account_number(account_number), agency_number(agency_number), account_owner(account_owner), cpf(cpf),  balance(0.0) {

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

void Account::setAccountOwner(string name)
{
	this->account_owner = name;
}

std::string Account::getAccoutOwner()
{
	return this->account_owner;
}