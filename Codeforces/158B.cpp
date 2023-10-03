//Link: https://codeforces.com/problemset/problem/158/B

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, s, c[5] = {0}, total = 0;
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		cin >> s;
		c[s] += 1;
	}
	total += c[4];
	total += c[3];
	c[1] -= c[3];
	total += c[2]/2;
	c[2] %= 2;
	if(c[2] == 1) {
		total += 1;
		c[1] -= 2;
	}
	if(c[1] > 0) {
		total += c[1] / 4;
		c[1] %= 4;
		if(c[1] > 0) total += 1;
	}
	cout << total;
	return 0;
}
