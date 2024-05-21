//Link: https://codeforces.com/problemset/problem/339/B

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n, m, last = 1, a, time = 0;
	cin >> n >> m;
	for(int i = 0 ; i < m ; i++) {
		cin >> a;
		if(a >= last) time += a-last;
		else time += n-(last-a);
		last = a;
	}
	cout << time;
	return 0;
}
