#include <iostream>
using namespace std;

int findFirstElement(double eps) {
	int count = 0;
	double a;
	int i = 0;
	a = (pow(2, sizeof(float) * 8.0 - 1) - 1);
	do {
		a = pow(-1, i) * ((i - 1) / (2 * (pow(i, 2)) + 1));
		if (abs(a) <= eps) {
			count = i;
			break;
		}
		++i;
	} while (abs(a) > eps);
	count += 1;
	return count;
}