//Link: https://codeforces.com/problemset/problem/579/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, count = 0;
	cin >> n;
	while(n != 0) {
		if(n & 1) count++;
		n >>= 1;
	}
	cout << count;
	return 0;
}

