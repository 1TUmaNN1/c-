
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cout << "enter day by numbers: ";
	cin >> a;
	cout << "enter mouth by numbers: ";
	cin >> b;
	cout << endl;
	if (a < 32 && a > 0 && (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12))
	{
		cout << "there is such a day!" << endl;
	} 
	else if (a < 31 && a > 0 && (b == 4 || b == 6 || b == 9 || b == 11))
	{
		cout << "there is such a day!" << endl;
		return 0;
	}
	else if (a < 29 && a > 0 && (b == 2))
	{
		cout << "there is such a day!" << endl;
			return 0;
	}
	else {
		cout << "there is no such day :(" << endl;
	}
}