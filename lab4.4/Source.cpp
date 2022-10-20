
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double R1, R2, x, xp, xk, dx, A, B, F, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -6) {
			y = R2 / 2;
			//cout << "y = " << y << " doing 1st condition";
		}
		else if (-6 < x && x <= -2 * R2) {

			y = (R2 * (-0.5 * x - R2) / (2 * (3 - R2)));
			//cout << "y = " << y << " doing 2nd condition";
		}
		else if (-2 * R2 < x && x <= 0) {
			y = sqrt(R2 * R2 - (pow((x + R2), 2)));
			//cout << "y = " << y << " doing 3rd condition";

		}
		else if (0 < x && x <= 2 * R1) {

			y = -sqrt(R1 * R1 - (pow((x - R1), 2)));
			//cout << "y = " << y << " doing 4th condition";
		}
		else {
			y = -x * R1 + 2 * R1 * R1;
			
		}

		

		cout << "|" << setw(10) << setprecision(3) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}

