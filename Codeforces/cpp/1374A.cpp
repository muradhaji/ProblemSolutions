//Link: https://codeforces.com/problemset/problem/1374/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y, n, res;
	cin >> t;
	while(t--) {
		cin >> x >> y >> n;
		res = (n / x) * x;
		res += y;
		if(res > n) res -= x;
		cout << res << endl;
	}
	return 0;
}

