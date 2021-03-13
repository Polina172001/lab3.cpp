#include <iostream>
using namespace std;

double sum(int n) {
	double a = 0;
	double sum = 0;
	int i = 0;
	do {
		a = pow(-1, i) * ((i - 1) / (2 * (pow(i, 2)) + 1));
		sum += a;
		cout << "n=" << (i + 1) << "    " << "f=" << a << "\n";
		++i;
	} while (i < n);
	cout << "sum = " << sum << endl;
	return a;
}