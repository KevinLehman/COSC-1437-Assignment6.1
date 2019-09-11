/*
Kevin Lehman  - 1463553
Tarrant County College - COSC 1437- Fall 2017
Assignment 1 - Week 6
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int length = 30;
	char choice = 'Y';
	char encrypt[length];
	char decrypt[length];
	string nameS;

	do
	{
		cout << "Please enter a name you wish to decrypt." << endl;
		getline(cin, nameS);

		for (int idx = 0; idx < nameS.size(); idx++)
		{
			encrypt[idx] = nameS[idx] + 1;
		}

		cout << "Your encrypted name is ";
		for (int idx = 0; idx < nameS.size(); idx++)
		{
			cout << encrypt[idx];
		}
		cout << "." << endl;

		for (int idx = 0; idx < nameS.size(); idx++)
		{
			decrypt[idx] = encrypt[idx] - 1;
		}

		cout << "Your decrypted name is ";
		for (int idx = 0; idx < nameS.size(); idx++)
		{
			cout << decrypt[idx];
		}
		cout << "." << endl;
		cout << "Press Y to continue or X to exit." << endl;
		cin >> choice;
		cin.ignore();
	} while (choice != 'X');
	
	system("PAUSE");
	return 0;
}