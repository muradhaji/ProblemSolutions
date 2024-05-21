//Link: https://codeforces.com/problemset/problem/41/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s, t;
	cin >> s >> t;
	n = s.length();
	for(int i = 0 ; i < n ; i++) {
		if(s[i] != t[n-i-1]) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
