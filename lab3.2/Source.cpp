// Lab_03_2.cpp
// < ����� ������ >
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 15
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;
	// ���������� ����� ����'������
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

	// ������ ����� ����'������
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