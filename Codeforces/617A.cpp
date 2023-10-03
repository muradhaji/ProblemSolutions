//Link: https://codeforces.com/problemset/problem/617/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, steps = 0;
	cin >> x;
	for(int i = 5 ; i > 0 ; i--) {
		steps += (x/i);
		x -= (x/i) * i;
	}
	cout << steps;
	return 0;
}
