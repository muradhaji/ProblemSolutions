//Link: https://codeforces.com/problemset/problem/344/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, prev = 0, curr, groups = 0;
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		cin >> curr;
		if(curr != prev) {
			groups += 1;
			prev = curr;
		}
	}
	cout << groups;
	return 0;
}
