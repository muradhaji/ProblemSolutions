//Link: https://codeforces.com/problemset/problem/451/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	n = (n < m) ? n : m;
	if(n % 2 == 0) cout << "Malvika";
	else cout << "Akshat";
	return 0;
}
