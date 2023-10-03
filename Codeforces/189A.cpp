//Link: https://codeforces.com/problemset/problem/189/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, b, c, rem, count = 0;
	cin >> n >> a >> b >> c;
	for(int i = 0 ; i*a <= n ; i++) {
		for(int j = 0 ; i*a + j*b <= n; j++) {
			rem = n - (i*a + j*b);
			if(rem % c == 0) {
				count = max(count, i+j+(rem/c));
			}
		}
	}
	cout << count;
	return 0;
}
