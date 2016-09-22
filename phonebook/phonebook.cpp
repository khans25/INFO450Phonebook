// phonebook.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
using namespace std;

const int MIN = 10;
const int MAX = 20;

void showlist(char mylist[][MAX], int numEntered);
void AddName(char mylist[][MAX]);

int main()
{
	char nameList[MIN][MAX];
	int i;
	char answer = 'y';

	for (i = 0; i < MIN && (answer == 'y' || answer == 'Y'); i++)
	{
		AddName(nameList);
		cout << "Do you have additional names to enter? Y = Yes, N = No. " << endl;
		cin >> answer;
		cin.clear();
		cin.ignore();
	}
	cout << "Names entered: " << i << endl;
	showlist(nameList, i);

    return 0;
}

