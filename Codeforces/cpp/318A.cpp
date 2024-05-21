//Link: https://codeforces.com/problemset/problem/318/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n, k, mid;
	cin >> n >> k;
	mid = (n+1)/2;
	if(k <= mid) cout << (k * 2) - 1;
	else cout << (k - mid) * 2;
	return 0;
}
