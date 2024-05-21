//Link: https://www.e-olymp.com/az/problems/1249

#include <bits/stdc++.h>
using namespace std;

int main() {
	double n, y, x;
	while(cin >> n) {
		x = n*log10(n);
		y = floor(pow(10, x - floor(x)));
		cout << y << endl;
	}
	return 0;
}
