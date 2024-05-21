//Link: https://codeforces.com/problemset/problem/69/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, res[3] = {0}, x;
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < 3 ; j++) {
			cin >> x;
			res[j] += x;
		}
	}
	if(!res[0] && !res[1] && !res[2])
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
