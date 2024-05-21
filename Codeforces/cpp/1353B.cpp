//Link: https://codeforces.com/problemset/problem/1353/B

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, k, x, sum = 0;
	vector<int> a, b;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		sum = 0;
		a.assign(n, 0);
		b.assign(n, 0);
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		for(int i = 0 ; i < n ; i++) cin >> b[i];
		sort(a.rbegin(),a.rend());
		sort(b.rbegin(),b.rend());
		for(int i = 0 ; i < k && b[i] > a[n-i-1] ; i++)
			a[n-i-1] = b[i];
		for(int i = 0 ; i < n ; i++) sum += a[i];
		cout << sum << endl;
	}
	return 0;
}

