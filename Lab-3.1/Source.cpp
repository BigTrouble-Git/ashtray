// Lab_03_1.cpp
// < ����� ������ >
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 15

#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>

using namespace std;

int main() {
	double y;
	double x; 
	cout << " x = ";	cin >> x;
	//���������� ������
	if (x < 4) {
		y = pow(x, 3) + 2 + 5 * pow(x, 8) + pow(x, 6) - pow(x, 2) + 3;
		
	}

	if (4 <= x && x < 7) {
		y = pow(x, 3) + 2 + (4 * atan(1.0)) / 2 - atan(abs((x + 3) / 2)) + 7 * x;
		
	}

	if (x >= 7) {
		y = pow(x, 3) + 2 + log10(2 * x + exp(5 * x + 5));
		
	
	}
	cout << " y1 = " << y << endl;

	//������ ������ 
		if (x < 4) {
		y = pow(x, 3) + 2 + 5 * pow(x, 8) + pow(x, 6) - pow(x, 2) + 3;
	
	}
	else if (4 <= x && x < 7) {
		y = pow(x, 3) + 2 + (4 * atan(1.0)) / 2 - atan(abs((x + 3) / 2)) + 7 * x;
	
	}
	else {
		y = pow(x, 3) + 2 + log10(2 * x + exp(5 * x + 5));
		
	}
		cout << " y2 = " << y << endl;
		cin.get();
		return 0;
}