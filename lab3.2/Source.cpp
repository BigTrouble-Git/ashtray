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