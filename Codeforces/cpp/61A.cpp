//Link: https://codeforces.com/problemset/problem/61/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	for(int i = 0 ; i < s1.length() ; i++)
		(s1[i] != s2[i]) ? cout << '1' : cout << '0';
	return 0;
}
