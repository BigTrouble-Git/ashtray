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
	// скорочений спосіб розв'язання
	if (x < 0 && b != 0) {
		F = -a * x * x + b;
		cout << F  << endl ;
		
	}

	if (x > 0 && b == 0) {
		F = x / (x - c) + 5.5;
		cout << F  << endl;
	}

	if (!(x < 0 && b != 0) && !(x > 0 && b == 0)) {
		F = x / -c;
		cout << F <<  endl;
	}

	// повний спосіб розв'язання
	if (x < 0 && b != 0) {
		F = -a * x * x + b;
		cout << F  << endl;

	}
	else if (x > 0 && b == 0) {
		F = x / (x - c) + 5.5;
		cout << F << endl;
	}
	else {
		F = x / -c;
		cout << F  << endl;

	}
	cin.get();
	return 0;
}