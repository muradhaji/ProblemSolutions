//https://codeforces.com/problemset/problem/580/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, prev = 0, curr, curr_seq = 0, max_seq = 0;
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		cin >> curr;
		if(curr >= prev) curr_seq += 1;
		else curr_seq = 1;
		if(curr_seq > max_seq) max_seq = curr_seq;
		prev = curr;
	}
	cout << max_seq;
	return 0;
}
