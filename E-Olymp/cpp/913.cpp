//Link: https://www.e-olymp.com/az/problems/913

#include <bits/stdc++.h>
using namespace std;

int main() {
	int i, n;
	double a, b;
	cin >> n;
	for(int step = 0 ; step < n ; step++) {
		cin >> a >> b;
		printf("%.4f %.4f\n", a+b, a*b);
	}
	return 0;
}
