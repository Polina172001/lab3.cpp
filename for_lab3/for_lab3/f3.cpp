#include <iostream>

using namespace std;

void print(int n, int k) {
	int count = 1;
	double a = 0;
	for (int i = 0; i < n; i++) {
		if (count != k)
		{
			count++;
			a = pow(-1, i) * ((i - 1) / (2 * (pow(i, 2)) + 1));
			cout << "n=" << i << " " << "f=" << a << "\n";
		}
		else {
			count = 1;
			continue;
		}
	}

}