#include <iostream>
#include <cmath>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
	
	double k, S, N;
	cout << "N = "; cin >> N;
	S = 1;
	k = 1;

	while (k <= N)
	{
		S *= ((k * k) / (N * N) * cos((N * N) / (k * k)));
		k++;
	}
	cout << S << endl;
	//---------------
	S = 1;
	k = 1;
	do {
		S *= ((k * k) / (N * N) * cos((N * N) / (k * k)));
		k++;
	} while (k <= N);
	cout << S << endl;
	//---------------

	S = 1;
	for (k = 1; k <= N; k++)
	{
		S *= ((k * k) / (N * N) * cos((N * N) / (k * k)));
	}
	cout << S << endl; 
	//---------------

	S = 1;
	for (k = N; k >= 1 ; k--)
	{
		S *= ((k * k) / (N * N) * cos((N * N) / (k * k)));
	}
	cout << S << endl;
	return 0;
	
}