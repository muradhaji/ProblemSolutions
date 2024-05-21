//Link: https://codeforces.com/problemset/problem/1399/B

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, a[50], b[50], min_a, min_b;
	long long int sum;
	cin >> t;
	while(t--) {
		cin >> n;
		min_a = min_b = INT_MAX;
		sum = 0;
		for(int i = 0 ; i < n ; i++) {
			cin >> a[i];
			min_a = min(min_a, a[i]);
		}
		for(int i = 0 ; i < n ; i++) {
			cin >> b[i];
			min_b = min(min_b, b[i]);
		}
		for(int i = 0 ; i < n ; i++)
			sum += max(a[i] - min_a, b[i] - min_b);
		cout << sum << endl;
	}
	return 0;
}

