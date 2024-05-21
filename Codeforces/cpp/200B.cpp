//Link: https://codeforces.com/problemset/problem/200/B

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, percent, total_percent = 0;
	cin >> n;
	while(cin >> percent) total_percent += percent;
	cout << (double) total_percent / n;
	return 0;
}
