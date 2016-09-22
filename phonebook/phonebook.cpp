// phonebook.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
using namespace std;

const int MIN = 10;
const int COL = 2;
const int MAX = 50;

void thelist(char arr[MIN][COL][MAX], int numEntered);
void InsName(char arr[MIN][COL][MAX]);

int main()
{
	char nameList[MIN][COL][MAX];
	int i;
	char answer = 'y';

	for (i = 0; i < MIN && (answer == 'y' || answer == 'Y'); i++)
	{
		InsName(nameList);
		cout << "-----------------------------------------------------------" << endl;
		cout << "Want to enter additional entries? [Y] = Yes" << endl;
		cout << "Want to see list? [D] = Display" << endl;
		cout << "Want to exit? Enter any other key besides above options." << endl;
		cin >> answer;
		cin.clear();
		cin.ignore();
	}

	cout << "Entries: " << i << endl;
	thelist(nameList, i);

    return 0;
}

void thelist(char arr[MIN][COL][MAX], int numEntered)
{
	int i;
	for (i = 0; i < numEntered; i++)
	{
		cout << "Name: " << arr[i][0] << " | Phone #: " << arr[i][1] << endl;
	}
}

void InsName(char arr[MIN][COL][MAX])
{
	static int i = 0;
	if (i >= MIN)
	{
		cout << "Insuficient Space, Create More Pylons." << endl;
	}
	else
	{
		cout << "Insert Name (First, Last): " << endl;
		cin.getline(arr[i][0], MAX);
		cout << "Insert Phone # (Ex. 111-222-3333): " << endl;
		cin.getline(arr[i][1], MAX);
		i++;
	}
}

