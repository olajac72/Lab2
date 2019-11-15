// SortCheck.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

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

int main()
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