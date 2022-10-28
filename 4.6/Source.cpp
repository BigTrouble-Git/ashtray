#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double P, S;
	int n, k;
	P = 0;
	n = 1;
	while (n <= 18)
	{
		S = 0;
		k = n;
		while (k <= 20) {
			S += ((sqrt(abs(1 - k / n))) / (2 * n * n + k * k));
			k++;
		}
		P += S;
		n++;

	}
	cout << P << "  1" << endl;


	P = 0;
	n = 1;
	do {
		S = 0;
		k = n;
		do {
			S += ((sqrt(abs(1 - k / n))) / (2 * n * n + k * k));
			k++;
		} while (k <= 20);

		P += S;
		n++;
	} while (n <= 18);

	cout << P << "  2" << endl;


	P = 0;
	for (n = 1; n <= 18; n++ ) {
		S = 0;
			for (k = n; k <= 20; k++) {
				S += ((sqrt(abs(1 - k / n))) / (2 * n * n + k * k));
			}
		P += S;


	}
	cout << P << "  3" << endl;

	P = 0;
	for (n = 18; n >= 1; n--) {
		S = 0;
		for (k = 20; k >= n; k--) {
			S += ((sqrt(abs(1 - k / n))) / (2 * n * n + k * k));

		}
		P += S;
	}
	cout << P << "  4" << endl;

	return 0;
}