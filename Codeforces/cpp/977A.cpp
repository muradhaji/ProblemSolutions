//Link: https://codeforces.com/problemset/problem/977/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, r;
	cin >> n >> k;
	while(k > 0) {
		r = n % 10;
		if(k > r) {
			n /= 10;
			k -= r + 1;
		}
		else {
			n -= k;
			k = 0;
		}
	}
	cout << n;
	return 0;
}
