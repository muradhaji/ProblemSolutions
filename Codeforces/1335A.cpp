//Link: https://codeforces.com/problemset/problem/1335/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t != 0) {
		cin >> n;
		if(n % 2 == 1) cout << n/2 << endl;
		else cout << n/2 - 1 << endl;
		t--;
	}
	return 0;
}
