// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include "stdafx.h"
#include "iostream"
using namespace std;




int simpleArraySum(int n, vector <int> ar) {
	int sum;
	for (int i = 0; i<n; i++) {
		sum = sum + ar[i];
	}
	return sum;
}

int main() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int ar_i = 0; ar_i < n; ar_i++) {
		cin >> ar[ar_i];
	}
	int result = simpleArraySum(n, ar);
	cout << result << endl;
	return 0;
}
