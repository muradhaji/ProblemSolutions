//Link: https://codeforces.com/problemset/problem/379/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, candles, new_candles;
	cin >> a >> b;
	candles = a;
	while(candles >= b) {
		new_candles = candles/b;
		candles = candles%b + new_candles;
		a += new_candles;
	}
	cout << a;
	return 0;
}

