/*
The C++ password security test program.
Asks the user for a string and then tests its security
checking if it has a number, capital and lower case letter
Regex is not used to keep readibility
*/

//Include the console I.O. header file
#include <iostream>
#include <string>
//Include the STL character checks
#include <cctype>
//Inlcude this program's header file
#include "password.h"

//Import the used functions from the c++ std namespace
using std::cout;
using std::cin;
using std::endl;
using std::string;

string starLine = "***************************************";

int main(int argc, char const *argv[])
{
	//Log a welcome message
	cout << "Welcome to a C++ password security tester" << endl;
	cout << "Developed by Tom Peregrine" << endl;

	//Get the users password
	string password;

	cout << "Please input a password: ";
	cin >> password;

	//TODO: Complete this
	cout << starLine << endl;
	cout << "Your password is: " << password << endl;
	cout << "It has a security rating of: " << ::typesFound(password) << " - "
		<< getRatingString(typesFound(password)) << endl;

	system("pause"); //TODO: REMOVE WHEN NOT IN WINDOWS

	return 0;
}

bool hasNumber(string word)
{
	for (int i = 0; i < word.length(); i++)
	{
		if (isdigit(word[i]))
		{
			return true;
		}
	}
	return false;
}

bool hasLetterCase(string word, bool LowerCheck)
{
	for (int i = 0; i < word.length(); i++)
	{
		if (LowerCheck) {
			if (islower(word[i]))
				return true;
		}
		else
		{
			if (isupper(word[i]))
				return true;
		}
	}
	return false;
}

//A function which returns the number of different types of characters found
int typesFound(string password)
{
	int types = 0;

	//Number check
	if (::hasNumber(password))
		types++;

	//Lower Check
	if (hasLetterCase(password, true))
		types++;

	if (hasLetterCase(password, false))
		types++;

	return types;
}

string getRatingString(int securityRating){
	switch (securityRating){
	case 0:
		return "INSECURE";
	case 1:
		return "WEAK";
	case 2:
		return "MEDIUM";
	case 3:
		return "STRONG";
	default:
		return "UNKNOWN";
	}
}