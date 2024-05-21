//Link: https://codeforces.com/problemset/problem/1328/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, divisible;
	cin >> t;
	for(int i = 0 ; i < t ; i++) {
		cin >> a >> b;
		if(a % b == 0)
			cout << 0 << endl;
		else {
			divisible = (a/b+1)*b;
			cout << divisible - a << endl;
		}
	}
	return 0;
}
