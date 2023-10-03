//Link: https://codeforces.com/problemset/problem/467/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, p, q, count = 0;
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		cin >> p >> q;
		if(q - p > 1) count += 1;		
	}
	cout << count;
	return 0;
}
