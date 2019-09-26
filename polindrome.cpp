#include "pch.h"
#include <iostream>



using namespace std;



int main() {
	int a;
	cout << "enter your number from 0 to 9999: ";
	cin >> a;
	do {
		if ((a > 0) && (a < 10)) {
			cout << a << " this number is a polidrome!";
			return 0;
		}
		if ((a < 1000) && (a > 99)) {
			if ((a % 10) == (a / 100)) {
				cout << a << " this number is a polidrome!";
				return 0;
			}
			else {
				cout << "this number is not a polidrome ;c";
				return 0;
			}
		}
		if ((a < 100) && (a > 9)) {
			if ((a % 10) == (a / 10)) {
				cout << a << " this number is a polidrome!";
				return 0;
			}
			else {
				cout << " this number is not a polidrome ;c";
				return 0;
			}
		}
		if ((a < 10000) && (a > 999)) {
			if ((a % 10) == (a / 1000) && ((a % 100 - a % 10)/10) == (a / 100 - a / 1000 * 10)) {
				cout << a << " this number is a polidrome!";
				return 0;
			}
			else {
				cout << " this number is not a polidrome ;c";
				return 0;
			}
		}
		if ((a > 9999) || (a < 0)) {
			cout << " YOU UPSET PROTOCOL";
			return 0;
		}
	} while (true);
}