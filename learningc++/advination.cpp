#include <iostream>
using namespace std;

void advination() {

    const int SECRET_NUMBER = 123;

    int NUMBER_OF_ATTEMPTS = 3;

    cout << "Welcome to the Advination Game !";

    while (true)
    {
        cout << "\nYou Have " << NUMBER_OF_ATTEMPTS << " Attempts\n";

        cout << "\nType your number: ";
        int input_number;
        cin >> input_number;
        cout << "\nYour Number is ... " << input_number << "\n";

        NUMBER_OF_ATTEMPTS--;

        if (input_number == SECRET_NUMBER)
        {
            cout << "\nYou win !\n";
            break;
        }
        else if (input_number > SECRET_NUMBER) {
            cout << "\nYour number is grather than secret number ! ";
        }
        else if (NUMBER_OF_ATTEMPTS < 1)
        {
            cout << "\nYou lose !\n";
            break;
        }
        else
        {
            cout << "\nYour number is less than secret number !\n";
        }
    }
}