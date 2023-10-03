//Link: https://codeforces.com/problemset/problem/116/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, b, curr = 0, max = 0;
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		cin >> a >> b;
		curr += (b-a);
		if(curr > max) max = curr;
	}
	cout << max;
	return 0;
}
