//Link: https://codeforces.com/problemset/problem/266/B

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t, temp;
	string s;
	cin >> n >> t >> s;
	for(int i = 0 ; i < t ; i++) {
		for(int j = 0 ; j < n-1 ; j++) {
			if(s[j] == 'B' && s[j+1] == 'G') {
				temp = s[j];
				s[j] = s[j+1];
				s[j+1] = temp;
				j += 1;
			}
		}
	}
	cout << s;
	return 0;
}
