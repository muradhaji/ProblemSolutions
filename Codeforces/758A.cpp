//Link: https://codeforces.com/problemset/problem/758/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, max = -1, sum = 0;
	cin >> n;
	while(cin >> a) {
		sum += a;
		max = (max > a) ? max : a;
	}
	cout << max*n - sum;
	return 0;
}

