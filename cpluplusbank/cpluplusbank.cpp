#include <iostream>
#include "Account.hpp"

int main()
{
	Account a("987654", "1234", "Leonardo", "123.45.789-44");
	Account b("654987", "456", "Conta b", "321.654.987-77");

	a.depoisit(100);

	std::cout << Account::account_id;
}
