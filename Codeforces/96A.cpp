//Link: https://codeforces.com/problemset/problem/96/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int k = 1;
	string s;
	cin >> s;
	s += ".";
	for(int i = 1 ; i < s.length() ; i++) {
		if(s[i] == s[i-1]) k++;
		else k = 1;
		if(k == 7) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
