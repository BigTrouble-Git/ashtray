// Lab_03_1.cpp
// < Снігур Стефан >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 15

#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>

using namespace std;

int main() {
	double y, y1, y2;
	double x; 
	double A;
	double B;
	cout << " x = ";	cin >> x;
	A = pow(x, 3) + 2;
	//скорочений варіант
	if (x < 4) {
		B =  5 * pow(x, 8) + pow(x, 6) - pow(x, 2) + 3;
		
	}

	if (4 <= x && x < 7) {
		B =  (4 * atan(1.0)) / 2 - atan(abs((x + 3) / 2)) + 7 * x;
		
	}

	if (x >= 7) {
		B = log10(2 * x + exp(5 * x + 5));
		
	
	}
	y1 = A + B;
	cout << " y1 = " << y1 << endl;

	//повний варіант 
		if (x < 4) {
			B = 5 * pow(x, 8) + pow(x, 6) - pow(x, 2) + 3;
	
	}
	else if (4 <= x && x < 7) {
			B = (4 * atan(1.0)) / 2 - atan(abs((x + 3) / 2)) + 7 * x;
	
	}
	else {
			B = log10(2 * x + exp(5 * x + 5));
		
	} 
		y2 = A + B;
		cout << " y2 = " << y2 << endl;
		cin.get();
		return 0;
}