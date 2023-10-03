//Link: https://www.e-olymp.com/az/problems/10

#include <bits/stdc++.h>
using namespace std;

int main() {
	double n, total = 0;
	cin >> n;
	total = 1 / n;
	while(total <= 0.5) {
		n -= 1;
		total += 1/n;
	}
	cout << n;
	return 0;
}
