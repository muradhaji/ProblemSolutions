//Link: https://codeforces.com/problemset/problem/996/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, bills[] = {100,20,10,5,1}, count = 0;
	cin >> n;
	for(auto bill : bills) {
		count += n/bill;
		n = n%bill;
	}
	cout << count;
	return 0;
}
