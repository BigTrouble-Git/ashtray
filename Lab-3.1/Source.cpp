// Lab_03_1.cpp
// < Снігур Стефан >
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 15

#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
#define pi 3.14
#define e 2.71828
using namespace std;

int main() {
	double y;
	double x; 	cin >> x;
	double z;
	double m;
	if (x < 4) {
		y = 5 * pow(x, 8) + pow(x, 6) - pow(x, 2) + 3;
		cout << y;// << "y";
	}

	if (4 <= x && x < 7) {
		z = pi / 2 - atan((x + 3) / 2) + 7 * x;
		cout << z;// << "z";
	}

	if (x >= 7) {
		m = log10(2 * x + pow(e, 5 * x + 5));
		cout << m << "m";
	}
}