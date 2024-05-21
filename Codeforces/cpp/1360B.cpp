//Link: https://codeforces.com/problemset/problem/1360/B

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, s, res;
	vector<int> athletes;
	cin >> t;
	while(t--) {
		cin >> n;
		athletes.resize(n);
		for(int i = 0 ; i < n ; i++)
			cin >> athletes[i];
		sort(athletes.begin(), athletes.end());
		res = INT_MAX;
		for(int i = 1 ; i < n ; i++)
			res = min(res, athletes[i] - athletes[i-1]);
		cout << res << endl;
	}
	return 0;
}

