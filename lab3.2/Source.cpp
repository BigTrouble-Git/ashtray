// Lab_03_2.cpp
// < Снігур Стефан >
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 15
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x; // вхідний аргумент
	double a; // вхідний параметр
	double b; // вхідний параметр
	double c; // вхідний параметр
	double F; // результат обчислення виразу

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;
	if (x < 0 && b != 0) {
		F = -a * x * x + b;
		cout << F << "DEC1" << endl ;
		
	}

	if (x > 0 && b == 0) {
		F = x / (x - c) + 5.5;
		cout << F << "DEC2" << endl;
	}

	if (!(x < 0 && b != 0) && ! (x > 0 && b == 0)) {
		F = x / -c;
		cout << F << "DEC3"<< endl;
	}

}