//Link: https://codeforces.com/problemset/problem/228/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int s;
	set <int> unique;
	for(int i = 0 ; i < 4 ; i++) {
		cin >> s;
		unique.insert(s);
	}
	cout << 4 - unique.size();
	return 0;
}
