//Link: https://codeforces.com/problemset/problem/791/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, year = 0;
	cin >> a >> b;
	while(a <= b) {
		a *= 3;
		b *= 2;
		year += 1;
	}
	cout << year;
	return 0;
}
