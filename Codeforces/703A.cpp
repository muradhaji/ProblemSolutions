//Link: https://codeforces.com/problemset/problem/703/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x, y, m = 0, c = 0;
	cin >> n;
	while(n--) {
		cin >> x >> y;
		if(x > y) m++;
		else if(x < y) c++;
	}
	if(m > c) cout << "Mishka";
	else if(m < c) cout << "Chris";
	else cout << "Friendship is magic!^^";
	return 0;
}

