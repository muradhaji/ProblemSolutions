//Link: https://codeforces.com/problemset/problem/1409/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, diff, moves;
	cin >> t;
	for( ; t != 0 ; t--) {
		cin >> a >> b;
		diff = abs(a-b);
		moves = diff/10 + (diff%10 != 0);
		cout << moves << endl;
	}
	return 0;
}
