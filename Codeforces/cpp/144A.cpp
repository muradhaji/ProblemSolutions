//Link: https://codeforces.com/problemset/problem/144/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, min = INT_MAX, max = INT_MIN, min_index, max_index;
	cin >> n;
	int row[n];
	for(int i = 0 ; i < n ; i++) {
		cin >> row[i];
		if(row[i] < min) min = row[i];
		if(row[i] > max) max = row[i];
	}
	for(int i = 0 ; i < n ; i++)
		if(row[i] == min) min_index = i;
	for(int i = n-1 ; i >= 0 ; i--)
		if(row[i] == max) max_index = i;
	if(max_index > min_index)
		cout << (max_index) + (n - min_index - 1) - 1;
	else
		cout << (max_index) + (n - min_index - 1);
	return 0;
}
