// phonebook.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
using namespace std;

const int MIN = 10;
const int MAX = 20;

void thelist(char mylist[][MAX], int numEntered);
void InsName(char mylist[][MAX]);

int main()
{
	char nameList[MIN][MAX];
	int i;
	char answer = 'y';

	for (i = 0; i < MIN && (answer == 'y' || answer == 'Y'); i++)
	{
		InsName(nameList);
		cout << "Do you have additional names to enter? Y = Yes, N = No. " << endl;
		cin >> answer;
		cin.clear();
		cin.ignore();
	}
	cout << "Names entered: " << i << endl;
	thelist(nameList, i);

    return 0;
}

void thelist(char mylist[][MAX], int numEntered)
{
	int i;
	for (i = 0; i < numEntered; i++)
	{
		cout << mylist[i] << endl;
	}
}

void InsName(char mylist[][MAX])
{
	static int i = 0;
	if (i >= MIN)
	{
		cout << "Insuficient Space, Create More Pylons." << endl;
	}
	else
	{
		cout << "Insert Name (First, Last): " << endl;
		gets_s(mylist[i]);
		i++;
	}
}

