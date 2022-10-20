
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double a , b, c, x, xp, xk, dx, A, B, F, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(7) << "F" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		
		if (x < 0 && b != 0)
			F = -a * x * x + b;
		else
			if (x > 0 && b == 0)
				F = x / (x - c) + 5.5;
			else
				F = x / -c;
		
		cout << "|" << setw(10) << setprecision(3) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
