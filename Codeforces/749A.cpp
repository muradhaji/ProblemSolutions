//Link: https://codeforces.com/problemset/problem/749/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, c2, c3;
	cin >> n;
	c2 = (n & 1) ? (n - 3) / 2 : n / 2;
	c3 = (n & 1) ? 1 : 0;
	cout << c2 + c3 << endl;
	while(c2--) cout << "2 ";
	while(c3--) cout << "3 ";
	return 0;
}

