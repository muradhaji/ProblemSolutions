//Link: https://codeforces.com/problemset/problem/427/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x, recruits = 0, untreated = 0;
	cin >> n;
	for( ; n != 0 ; n--) {
		cin >> x;
		if(x == -1) {
			if(recruits == 0) untreated++;
			else recruits--;
		}
		else recruits += x;
	}
	cout << untreated;
	return 0;
}
