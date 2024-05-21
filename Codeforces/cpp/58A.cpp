//Link: https://codeforces.com/problemset/problem/58/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int sequence[6] = {-1,0,0,0,0,0};
	string s, word = "xhello";
	cin >> s;
	for(int i = 1 ; i < 6 ; i++) {
		for(int j = sequence[i-1]+1 ; j < s.length() ; j++) {
			if(s[j] == word[i]) {
				sequence[i] = j;
				break;
			}
		}
	}
	for(int i = 2 ; i < 6 ; i++) {
		if(sequence[i] <= sequence[i-1]) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
