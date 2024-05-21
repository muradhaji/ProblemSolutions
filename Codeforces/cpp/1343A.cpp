//Link: https://codeforces.com/problemset/problem/1343/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, sum;
	cin >> t;
	while(t--) {
		cin >> n;
		sum = 3;
		while(sum <= n) {
			if(n % sum == 0) {
				cout << n / sum << endl;
				break;
			}
			sum <<= 1;
			sum++;
		}
	}
	return 0;
}

