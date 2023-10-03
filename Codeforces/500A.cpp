//Link: https://codeforces.com/problemset/problem/500/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t, a, curr = 1;
	cin >> n >> t;
	for(int i = 1 ; i < n; i++) {
		cin >> a;
		if(curr == i) curr += a;
		if(curr == t) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}

