//Link: https://codeforces.com/problemset/problem/141/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	s1 += s2;
	sort(s1.begin(), s1.end());
	sort(s3.begin(), s3.end());
	if(s1 == s3) cout << "YES";
	else cout << "NO";
	return 0;
}
