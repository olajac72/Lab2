// 2Darray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <time.h>
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

int main()
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