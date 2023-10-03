//Link: https://codeforces.com/problemset/problem/469/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	set <int> unique;
	int n, p, q, a;
	cin >> n >> p;
	for(int i = 0 ; i < p ; i++) {
		cin >> a;
		unique.insert(a);
	}
	cin >> q;
	for(int i = 0 ; i < q ; i++) {
		cin >> a;
		unique.insert(a);
	}
	if(unique.size() == n) cout << "I become the guy.";
	else cout << "Oh, my keyboard!";
	return 0;
}
