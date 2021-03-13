#include <iostream>

using namespace std;

double summ2(double eps) {
	double a = 0;
	double sum = 0;
	int i = 0;
	a = (pow(2, sizeof(float) * 8.0 - 1) - 1);
	while (abs(a) > eps) {
		a = pow(-1, i) * ((i - 1) / (2 * (pow(i, 2)) + 1));
		sum += a;
		++i;
	}
	cout << "sum = " << sum << endl;
	return sum;
}