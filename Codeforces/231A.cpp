//Link: https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x, i, sum, count = 0;
	cin >> n;
	while(n != 0) {
		sum = 0;
		for(i = 0 ; i < 3 ; i++) {
			cin >> x;
			sum += x;
		}
		if(sum > 1) count++;
		n--;
	}
	cout << count;
	return 0;
}
