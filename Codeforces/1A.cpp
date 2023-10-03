//Link: https://codeforces.com/problemset/problem/1/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, m, a, x = 1, y = 1;
	cin >> n >> m >> a;
	if(n > a) {
		if(n % a == 0) x = n / a;
		else x = (n / a) + 1;
	}
	if(m > a) {
		if(m % a == 0) y = m / a;
		else y = (m / a) + 1;
	}
	cout << x * y;
	return 0;
}
