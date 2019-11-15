// Menu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "StaticLib1.h"
using namespace std;

int main()
{
	int choice;

	while (true)
	{
		cout << endl << "Menu:" << endl;
		cout << "1: 2D array" << endl;
		cout << "2: Palindrome checker" << endl;
		cout << "3: Shrink" << endl;
		cout << "4: Sort check" << endl;
		cout << "5: Swap sort" << endl;
		cout << "6: Vector database" << endl;
		cout << "7: Quit" << endl;
		cout << "Select 1-7 :";
		cin >> choice;

		if (choice == 7)
			break;

		switch (choice)
		{
		case 1:
			main_2Darray();
			break;
		case 2:
			main_Palindromechecker();
			break;
		case 3:
			main_Shrink();
			break;
		case 4:
			main_SortCheck();
			break;
		case 5:
			main_SwapSort();
			break;
		case 6:
			main_VectorDatabase();
			break;
		default:
			cout << "Not a valid choice!";
			break;
		}
	}
}
