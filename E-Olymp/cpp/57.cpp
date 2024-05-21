//Link: https://www.e-olymp.com/az/problems/57

#include <bits/stdc++.h>
using namespace std;

int main() {
	double x1, y1, x2, y2, z2, result;
	cin >> x1 >> y1;
	cin >> x2 >> y2 >> z2;
	result = 1 / sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + z2*z2);
	printf("%.3f", result);
	return 0;
}
