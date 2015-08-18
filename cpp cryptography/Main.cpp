#include <iostream>
#include "sha256.h"

using namespace std;

int main()
{
	string userInput; string output;
	cout << "Enter string: " << endl;

	getline(cin, userInput);
	output = sha256(userInput);

	cout << "SHA256 hash of '" << userInput << "' is: " << endl;
	cout << output << endl;

	system("pause");
}