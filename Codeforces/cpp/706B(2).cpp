//Link: https://codeforces.com/problemset/problem/706/B

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q, m, prices[100000], count;
	cin >> n;
	for(int i = 0 ; i < n ; i++)
		cin >> prices[i];
	sort(prices, prices + n);
	cin >> q;
	while(q--) {
		cin >> m;
		cout << upper_bound(prices, prices + n, m) - prices << endl;
	}
	return 0;
}

