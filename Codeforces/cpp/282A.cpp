//Link: https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x = 0;
	string statement;
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		cin >> statement;
		if(statement[0] == '-' || statement[1] == '-' || statement[2] == '-')
			x -= 1;
		else
			x += 1;
	}
	cout << x;
	return 0;
}
