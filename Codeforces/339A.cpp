//Link: https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int counts[4] = {0};
	cin >> s;
	for(int i = 0 ; i < s.length() ; i += 2)
		counts[s[i] - 48] += 1;
	s = "";
	for(int i = 1 ; i < 4 ; i++) {
		for(int j = 0 ; j < counts[i] ; j++) {
			s += (i + 48);
			s += "+";
		}
	}
	s.erase(s.length()-1);
	cout << s;
	return 0;
}
