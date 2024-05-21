//Link: https://www.e-olymp.com/az/problems/9423

#include <bits/stdc++.h>
using namespace std;

int main() {
	double x, k, c, a, y;
	cin >> x >> k;
	c = sqrt(fabs(x));
	a = pow(c, 4) + pow(k, 3);
	y = pow(log10(a), 3) + pow(cos(x), 5);
	printf("%.2f",y);
	return 0;
}
