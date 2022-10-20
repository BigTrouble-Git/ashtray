#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		 <<  setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A = pow(x, 3) + 2 ;
		if (x < 4)
			B = 5 * pow(x, 8) + pow(x, 6) - pow(x, 2) + 3;
		else
			if (4 <= x && x < 7 )
				B = (4 * atan(1.0)) / 2 - atan(abs((x + 3) / 2)) + 7 * x;
			else
				B = log10(2 * x + exp(5 * x + 5));
		y = A + B;
		cout << "|" << setw(10)  << setprecision(3) << x
			<< " |" << setw(10)  << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}