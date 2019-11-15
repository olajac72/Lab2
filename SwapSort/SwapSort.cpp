// SwapSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

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


int main()
{
	int a, b, c;
	bool ascending;

	while(true)
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
