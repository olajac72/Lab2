// StaticLib1.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <vector>

using namespace std;

void array_rows_cols(int calcarray[][10], int r, int c)
{
	int rowsum, colsum[10], totsum;
	rowsum = 0;

	for (int reset = 0; reset < 10; reset++)
	{
		colsum[reset] = 0;
	}

	totsum = 0;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++)
		{
			totsum = totsum + calcarray[i][j];
			rowsum = rowsum + calcarray[i][j];
			colsum[j] = colsum[j] + calcarray[i][j];
			cout << calcarray[i][j] << " ";
		}
		cout << rowsum << endl;

		rowsum = 0;
	}

	for (int colsums = 0; colsums < c; colsums++)
	{
		cout << colsum[colsums] << " ";
	}

	cout << totsum;
}

void main_2Darray()
{
	int rndarray[10][10];
	int rows, cols;
	srand(time(NULL));
	cout << "Number of rows :";
	cin >> rows;
	cout << "Number of cols :";
	cin >> cols;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
		{
			rndarray[i][j] = rand() % 10;
		}
	}

	array_rows_cols(rndarray, rows, cols);
}

bool is_palindrome(char testword[], int ll)
{
	const int l = 10;
	//const int l = ll;
	char reverse[l] = { "xxxxxxxxx" };
	bool palindrome = true;

	for (int i = 0; i < l; i++)
	{
		reverse[i] = testword[l - 1 - i];
	}

	for (int j = 0; j < l; j++)
	{
		if (reverse[j] != testword[j])
		{
			palindrome = false;
		}
	}
	return palindrome;
}

void main_Palindromechecker()
{
	const int l = 10;
	char wordtest[l] = { "xxxxxxxxx" };
	printf("Enter %i characters :", l);
	int res = scanf("%s", wordtest);

	cout << "Word is " << wordtest << endl;

	if (is_palindrome(wordtest, l) == true)
	{
		cout << "Word is a palindrome" << endl;
	}
	else
	{
		cout << "Word is NOT a palindrome" << endl;
	}
}

void shrink_array(int inarr[], int outarr[])
{
	int index = 0;

	for (int i = 0; i < 10; i = i + 2)
	{
		outarr[index] = inarr[i] + inarr[i + 1];
		index++;
	}
}

void main_Shrink()
{
	int inarray[10], outarray[10];

	for (int i = 0; i < 10; i++)
	{
		outarray[i] = 0;

		inarray[i] = rand() % 10;
	}

	shrink_array(inarray, outarray);

	cout << "Input array :";
	for (int i = 0; i < 10; i++)
	{
		cout << inarray[i] << ", ";
	}
	cout << endl << "Output array :";
	for (int i = 0; i < 10; i++)
	{
		cout << outarray[i] << ", ";
	}
}

bool is_sorted(int test[], int arrsize)
{
	bool sorted = true;

	int number = test[0];

	for (int i = 1; i < arrsize; i++)
	{
		if (number > test[i])
			sorted = false;
		else
			number = test[i];
	}

	return sorted;
}

void main_SortCheck()
{
	const int arrsize = 5;
	int checkthis[arrsize];

	for (int i = 0; i < arrsize; i++)
	{
		cout << "Enter number : " << i + 1 << ":";
		cin >> checkthis[i];
	}

	if (is_sorted(checkthis, arrsize) == true)
	{
		cout << "Array is sorted" << endl;
	}
	else
	{
		cout << "Array is NOT sorted" << endl;
	}
	//std::cout << "Hello World!\n";
}

void swap(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_sort(int& a, int& b, int& c, bool order)
{
	if (order == true)
	{
		if (a > b)
			swap(a, b);

		if (a > c)
			swap(a, c);

		if (b > c)
			swap(b, c);

	}
	else
	{
		if (a < b)
			swap(a, b);

		if (a < c)
			swap(a, c);

		if (b < c)
			swap(b, c);

	}
}


void main_SwapSort()
{
	int a, b, c;
	bool ascending;

	while (true)
	{
		cout << endl << "Give a (0 to quit) :";
		cin >> a;

		if (a == 0)
			break;

		cout << endl << "Give b :";
		cin >> b;
		cout << endl << "Give c :";
		cin >> c;
		cout << endl << "Sort a/d (1/0) :";
		cin >> ascending;

		swap_sort(a, b, c, ascending);

		cout << endl << "Result :" << a << ", " << b << ", " << c << endl;

	}

	cout << "Bye bye!";
}

void main_VectorDatabase()
{
	vector<string> db;
	int choice;
	string name;

	while (true)
	{
		cout << "MENU" << endl;
		cout << "1: Initialize database" << endl;
		cout << "2: Insert" << endl;
		cout << "3: Search" << endl;
		cout << "4: Delete" << endl;
		cout << "5: Print" << endl;
		cout << "6: Quit" << endl;
		cout << "Make your choice :";
		cin >> choice;

		if (choice == 6)
			break;



		switch (choice)
		{
		case 1:
			db.clear();
			break;
		case 2:
			while (true)
			{
				cout << "Insert name:";
				cin >> name;
				if (name == "Q" || name == "q")
					break;
				db.push_back(name);
			}
			break;
		case 3:
			cout << "Search for :";
			cin >> name;

			for (int i = 0; i < db.size(); i++)
			{
				if (db[i].find(name) != string::npos)
				{
					cout << db[i] << endl;
				}
			}
			break;
		case 4:
			cout << "Delete name:";
			cin >> name;

			for (auto n = db.begin(); n != db.end();)
			{
				if (name == *n)
				{
					n = db.erase(n);
				}
				else
				{
					++n;
				}
			}
			break;
		case 5:
			for (string s : db)
			{
				cout << s << endl;
			}
			break;
		default:
			break;
		}

	}
}