//Link: https://codeforces.com/problemset/problem/432/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, y, count = 0;
	cin >> n >> k;
	for( ; n != 0 ; n--) {
		cin >> y;
		if(y+k <= 5) count++;
	}
	cout << count/3;
	return 0;
}

