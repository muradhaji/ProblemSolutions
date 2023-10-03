//Link: https://codeforces.com/problemset/problem/266/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k = 1, sum = 0;
	string s;
	cin >> n >> s;
	s += ".";
	for(int i = 1 ; i <= n ; i++) {
		if(s[i] == s[i-1]) k++;
		else {
			sum += k-1;
			k = 1;
		}
	}
	cout << sum;
	return 0;
}
