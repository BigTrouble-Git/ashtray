#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double R, x, y, i;

	srand((unsigned)time(NULL));
	cout << "R = "; cin >> R;
	
	for (i = 0; i < 10; i++) {

		
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;

		if ((x * x + y * y <= R * R) && x >= 0 && y <= 0 ||
			(x > -R && x <= 0 && y >= 0 && y < R) && pow(x + R, 2) + pow(y - R, 2) > R * R) {
		
			cout <<  "Yes" << endl;
		}
		else
			cout << "No" << endl;
	}
	cout << fixed << endl;

	for (i = 0; i < 10; i++) {
		
		x = rand() * (R - -R) / RAND_MAX - R;
		y = rand() * ( R - -R) / RAND_MAX - R;

		if ((x * x + y * y <= R * R) && x >= 0 && y <= 0 ||
			(x > -R && x <= 0 && y >= 0 && y < R) && pow(x + R, 2) + pow(y - R, 2) > R * R) {
			
			cout << setw(10) << setprecision(3) << x << "  "
				 << setw(10) << setprecision(3) << y << "  " << "yes" << endl;

		}
		else
			cout << setw(10) << setprecision(3) << x << "  "
			     << setw(10) << setprecision(3) << y << "  " << "no" << endl;
	}		
	return 0;
}

