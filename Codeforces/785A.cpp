//Link: https://codeforces.com/problemset/problem/785/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int n, total = 0;
	cin >> n;
	while(cin >> s) {
		if(s[0] == 'T') total += 4;
		else if(s[0] == 'C') total += 6;
		else if(s[0] == 'O') total += 8;
		else if(s[0] == 'D') total += 12;
		else total += 20;
	}
	cout << total;
	return 0;
}
