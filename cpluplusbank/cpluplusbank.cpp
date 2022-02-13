#include <iostream>
#include "Account.hpp"
#include "Manager.hpp"
#include "SavingAccount.hpp"
using namespace std;


int main()
{
	Holder ana("Holder Ana", "123.45.789-77");
	Holder joao("Holder Joao", "987.455.123-78");

	Manager carlos("Carlos", "987.455.123-78");
	
	SavingAccount account_ana("654987", "456", ana);
	Account account_joao("321654", "456", joao);

	cout << account_ana.account_id;

	cout << "\nAccount Ana : " << account_ana.getBalance() << " Account Joao: " << account_joao.getBalance() << "\n";

	account_ana.depoisit(100.0);
	cout << "\nAccount Ana : " << account_ana.getBalance() << " Account Joao: " << account_joao.getBalance() << "\n";

	account_ana.transfer(99.9, account_joao);
	cout << "\nAccount Ana : " << account_ana.getBalance() << " Account Joao: " << account_joao.getBalance() << "\n";

	account_joao.withdraw(0.9);
	cout << "\nAccount Ana : " << account_ana.getBalance() << " Account Joao: " << account_joao.getBalance() << "\n";

	account_ana.withdraw(100);

	#if 0

		int number = 88;
		int* pNumber = &number;  // Declare and assign the address of variable number to pointer pNumber (0x22ccec)
		cout << pNumber << endl;   // Print the content of the pointer variable, which contain an address (0x22ccec)
		cout << *pNumber << endl; // Print the value "pointed to" by the pointer, which is an int (88)
		*pNumber = 99;            // Assign a value to where the pointer is pointed to, NOT to the pointer variable
		cout << *pNumber << endl; // Print the new value "pointed to" by the pointer (99)
		cout << number << endl;   // The value of variable number changes as well (99)

	#endif // 0

	#if 0

		int number = 123;

		int* point = &number;
		int& ref = number;

		number = 99;
		ref = 101;
		*point = 546;
		cout << number << "\n" << point;

	#endif // 0

	return 0;
}
