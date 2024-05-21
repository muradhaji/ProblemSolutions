//Link: https://codeforces.com/problemset/problem/723/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int x1, x2, x3, l, r, total = INT_MAX;
	cin >> x1 >> x2 >> x3;
	l = min(x1, min(x2, x3));
	r = max(x1, max(x3, x3));
	while(l <= r) {
		total = min(total, abs(l-x1)+abs(l-x2)+abs(l-x3));
		l++;
	}
	cout << total;
	return 0;
}

