// Lab_03_3.cpp
// < Снігур Стефан >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 15


#include <iostream>
#include <cmath>

using namespace std;

int main() {
		double x; cout << "x = ";   cin >> x;  // вхідний аргумент
		double R1; cout << "R1 = "; cin >> R1; // вхідний параметр
		double R2; cout << "R2 = "; cin >> R2; // вхідний параметр
		double y;							   // результат обчислення виразу

	if (x <= -6) {
		y = R2 / 2;
		cout << "y = " << y << " doing 1st condition";
	}
		else if (-6 < x && x <= -2 * R2) {

		y = (R2 * (-0.5 * x - R2)/(2 * (3 - R2)));
		cout << "y = " << y << " doing 2nd condition";
	}
		else if (-2 * R2 < x && x <= 0) {
		y = sqrt(R2 * R2 - (pow((x + R2),2)) );
		cout << "y = " << y << " doing 3rd condition";

	}
		else if (0 < x && x <= 2 * R1) {

		y = -sqrt(R1 * R1 - (pow((x - R1), 2)));
		cout << "y = " << y << " doing 4th condition";
	}
		else {
		y = -x * R1 + 2 * R1 * R1;
		cout << "y = " << y << " doing 5th condition";
	}
	cout << " y = " << y;
		cin.get();
	return 0;
}