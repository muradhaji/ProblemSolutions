//Link: https://codeforces.com/problemset/problem/460/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	for(int i = m ; i <= n; i += m)
		n++;
	cout << n;
	return 0;
}

