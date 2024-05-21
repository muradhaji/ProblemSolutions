//Link: https://codeforces.com/problemset/problem/1367/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	string b, a;
	cin >> t;
	for( ; t != 0 ; t--) {
		cin >> b;
		a = b[0];
		for(int i = 1 ; i < b.size() - 1 ; i += 2)
			a += b[i];
		a += b[b.size() - 1];
		cout << a << endl;
	}
	return 0;
}

