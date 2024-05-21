//Link: https://codeforces.com/problemset/problem/1367/B

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a[40], bad_case, bad_even, bad_odd;
	cin >> t;
	while(t--) {
		cin >> n;
		bad_case = bad_even = bad_odd = 0;
		for(int i = 0 ; i < n ; i++) {
			cin >> a[i];
			if((i&1) != (a[i]&1)) {
				if(a[i]&1) bad_odd++;
				else bad_even++;
				bad_case++;
			}
		}
		if(!(bad_case&1) && (bad_even == bad_odd)) cout << bad_case / 2 << endl;
		else cout << -1 << endl;
	}
	return 0;
}

