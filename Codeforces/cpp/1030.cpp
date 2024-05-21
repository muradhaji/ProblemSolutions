//Link: https://codeforces.com/problemset/problem/1030/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, o;
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		cin >> o;
		if(o == 1) {
			cout << "HARD";
			return 0;
		}
	}
	cout << "EASY";
	return 0;
}
