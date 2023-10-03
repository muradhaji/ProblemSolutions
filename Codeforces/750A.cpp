//Link: https://codeforces.com/problemset/problem/750/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, count = 0;
	cin >> n >> k;
	k = 240 - k;
	for(int i = 1 ; i*5 <= k && count < n; i++) {
		k -= i*5;
		count++;
	}
	cout << count;
	return 0;
}
