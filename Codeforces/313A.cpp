//Link: https://codeforces.com/problemset/problem/313/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	if(n < 0)
		n = max(n/10, (n/100)*10 + n%10);
	cout << n;
	return 0;
}

