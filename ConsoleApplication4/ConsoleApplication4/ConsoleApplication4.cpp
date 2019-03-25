// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "math.h"
#include "conio.h"
#include "iostream"
#include "string" 
#include <stdlib.h>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

void output(int *array, int amount) {

	for (int *q = array; q != array + amount; q++) {
		cout << *q << " ";
	}
	cout << endl;
}

int main() {
	const int M = 100;
	const int N = 100;
	int m = 0;
	int n = 0;
	int myMatrix[N][M];
	cin >> n;
	cin >> m;
	srand(time(0));
	bool flag;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> myMatrix[i][j];
		}

	}
	int minid[N] = { 0 };
	
	for (int i = 0; i < n; i++) {
	
		for (int j = 0; j < m; j++) {
			if (myMatrix[i][j] < myMatrix[i][minid[i]]) {
				minid[i] = i;
			}
		}

		
		for (int k = 0; k < n; k++) {
			
			if (myMatrix[k][minid[i]] < minid[i]) {
					cout << "NOPE" << endl;
					//flag = false;
					break;
			}
			else {
				cout << "OK" << endl;
			}
			}

		
	}
		

	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << myMatrix[i][j];
		}
		cout << endl;
	}*/



	_getch();
	return 0;
}

/*int main() {
const int M = 100;
const int N = 100;
int m = 0;
int n = 0;
int myMatrix[N][M];
cin >> n;
cin >> m;


for (int i = 0; i < n; i++) {
for (int j = 0; j < m; j++) {
myMatrix[i][j] = rand() % 40 + -9;

}

}

double maxVal = 0;
int counter = 0;
double output = 0;
for (int i = 0; i < n; i++) {
for (int j = 0; j < m; j++) {
if (myMatrix[i][j] > 0) {
maxVal = maxVal + myMatrix[i][j];
counter++;
//cout << "counter debug:" << counter << " ";
}


}
//cout << maxVal << endl;
cout << fixed << showpoint;
cout << setprecision(3);
cout <<  "maxVal  debug:" << maxVal << " ";
cout << "counter debug:" << counter << " ";
output = maxVal / counter;

cout  << "output debug:" <<"\t"<< "\t" << output << endl;
cout << endl;
counter = 0;
output = 0;
maxVal = 0;
}


for (int i = 0; i < n; i++) {
for (int j = 0; j < n; j++) {
cout << setw(4) << myMatrix[i][j];
}
cout << endl;
}
//cout << "Value: " << sum << endl;

_getch();
return 0;
}

*


	_getch();
	return 0;

}


	/*int main() {
		const int M = 100;
		const int N = 100;
		int m = 0;
		int n = 0;
		int myMatrix[N][M];
		cin >> n;
		cin >> m;


		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				myMatrix[i][j] = rand() % 40 + -9;
				//cout << "i:" << i << "j: " << j << endl;
			}

		}

	
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << setw(4) << myMatrix[i][j];
			}
			cout << endl;
		}
		//cout << "Value: " << sum << endl;

		_getch();
		return 0;
	}
	*/

/*int main() {
	int arraySize;
	int myArray[maxsize];
	cin >> arraySize;
	for (int i = 0; i < arraySize; i++) {
		cin >> myArray[i];
	}
	int negativeSum = 0;
	for (int i = 0; i < arraySize; i++) {
		if (myArray[i] < 0) {
			negativeSum += myArray[i];
		}
	}
	cout << "Sum of negative elements is: " << negativeSum;
	
	_getch();
	return 0;
}
*/	/*
	cout << fixed << showpoint;
	cout << setprecision(2);*/

	/*for (int i = 0; i < arraySize; i++) {
	if (abs(myArray[i]) < abs(value)) {
	value = myArray[i];

	}
	}*/


/*int main() {
	const int M = 100;
	const int N = 100;
	int m = 0;
	int n = 0;
	int myMatrix[N][M];
	cin >> n;
	cin >> m;


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			myMatrix[i][j] = rand() % 40 + -9;

		}

	}

	double maxVal = 0;
	int counter = 0;
	double output = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (myMatrix[i][j] > 0) {
				maxVal = maxVal + myMatrix[i][j];
				counter++;
				//cout << "counter debug:" << counter << " ";
			}
			

		}
		//cout << maxVal << endl;
		cout << fixed << showpoint;
		cout << setprecision(3);
		cout <<  "maxVal  debug:" << maxVal << " ";
		cout << "counter debug:" << counter << " ";
		output = maxVal / counter;
	
		cout  << "output debug:" <<"\t"<< "\t" << output << endl;
		cout << endl;
		counter = 0;
		output = 0;
		maxVal = 0;
		}

	
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << setw(4) << myMatrix[i][j];
			}
			cout << endl;
		}
	//cout << "Value: " << sum << endl;
	
	_getch();
	return 0;
}

*/

/*while (true) {
int inputValue = 0;
int a = 0;
int b = 0;
int sum = 0;
cin >> inputValue;
if (inputValue > 9 && inputValue < 100) {
a = inputValue / 10;
b = inputValue % 10;
sum = a + b;
if (sum % 2 == 0) {
cout << "YES" << endl;
break;
}
else {
cout << "NOPE" << endl;
}

}
else {
cout << "FATAL ERROR" << endl;

}
}
*/