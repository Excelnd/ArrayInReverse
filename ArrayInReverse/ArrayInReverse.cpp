// ArrayInReverse.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main() {
	int n, a[100], i;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> a[i];
	for (i = n - 1; i >= 0; i--)
		cout << a[i] << endl;

	return 0;
}

