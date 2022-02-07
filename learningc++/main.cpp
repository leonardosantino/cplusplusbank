#include <iostream>
#include <string>
#include "header.h"
using namespace std;

bool find_letter() {

	return false;
}

int main()
{
	cout << "\nWelcome to the Secret word game !\n";

	bool b = find_letter();

	cout << b;

	const string secret_key = " String ";

	cout << "\n " << secret_key.size() <<  "\n" << "\n" << secret_key.length() << "\n";

	while (true)
	{
		string input_number;

		cout << "Type your word: ";
		cin >> input_number;

		if (secret_key == input_number)
		{
			cout << "\nYou Win ! The Secret key is" << secret_key;
			break;
		}
		cout << "\nThis is not the secret word, try again.\n";
	}

	cout << "\nEnd of the game\n";

	return 0;
}
