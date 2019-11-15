// VectorDatabase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
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

			for (auto n = db.begin() ; n != db.end();)
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