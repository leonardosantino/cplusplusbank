#include <iostream>
#include "Account.hpp"
#include "Manager.hpp"
using namespace std;


int main()
{
	Holder ana("Holder Ana", "123.45.789-77");
	Holder joao("Holder Joao", "987.455.123-78");

	Manager carlos("Carlos", "987.455.123-78");

	
	Account account_ana("654987", "456", ana);
	Account account_joao("321654", "456", joao);


//	cout << "\nAccount Ana : " << account_ana.getBalance() << " Account Joao: " << account_joao.getBalance() << "\n";
//
//	account_ana.depoisit(100.0);
//	cout << "\nAccount Ana : " << account_ana.getBalance() << " Account Joao: " << account_joao.getBalance() << "\n";
//
//	account_ana.transfer(99.9, account_joao);
//	cout << "\nAccount Ana : " << account_ana.getBalance() << " Account Joao: " << account_joao.getBalance() << "\n";
//
//	account_joao.withdraw(0.9);
//	cout << "\nAccount Ana : " << account_ana.getBalance() << " Account Joao: " << account_joao.getBalance() << "\n";
}
