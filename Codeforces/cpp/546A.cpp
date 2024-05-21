//Link: https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, n, w, one_to_w, borrow;
	cin >> k >> n >> w;
	one_to_w = w * (w + 1) / 2;
	borrow = one_to_w * k - n;
	if(borrow > 0) cout << borrow;
	else cout << "0";
	return 0;
}
