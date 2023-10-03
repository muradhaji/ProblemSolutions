//Link: https://codeforces.com/problemset/problem/50/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, n, sum = 0;
	cin >> m >> n;
	sum += (m/2) * n;
	m = m - (m/2)*2;
	sum += (n/2) * m;
	cout << sum;
	return 0;
}
