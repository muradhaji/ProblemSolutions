//Link: https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	for(int i = 0 ; i < 5 ; i++) {
		for(int j = 0 ; j < 5 ; j++) {
			cin >> x;
			if(x == 1) {
				cout << abs(2-i) + abs(2-j);
				return 0;
			}
		}
	}
	return 0;
}
