// Shrink.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void shrink_array(int inarr[], int outarr[])
{
	int index = 0;

	for (int i = 0; i < 10; i = i + 2)
	{
		outarr[index] = inarr[i] + inarr[i + 1];
		index++;
	}
}

int main()
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