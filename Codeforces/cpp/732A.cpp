//Link: https://codeforces.com/problemset/problem/732/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, r, temp;
	cin >> k >> r;
	temp = k;
	while(k%10 != 0 && k%10 != r)
		k += temp;
	cout << k/temp;
	return 0;
}
