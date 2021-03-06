// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

/* Reverses string recursively */
string reverse(string& a, int l, int r);

int main()
{
	string b = "Hello World";
	cout << "String: " << b << endl;
	cout << "Reversed: " << reverse(b, 0, b.length() - 1) << endl;
	system("pause");
    return 0;
}

string reverse(string& a, int l, int r) {
	if (l < r) {
		swap(a[l], a[r]);
		reverse(a, l + 1, r - 1);
	}
	return a;
}