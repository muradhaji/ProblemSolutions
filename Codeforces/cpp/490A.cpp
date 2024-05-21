//Link: https://codeforces.com/problemset/problem/490/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x, teams;
	cin >> n;
	vector<vector<int>> arr(3);
	for(int i = 1 ; i <= n ; i++) {
		cin >> x;
		arr[x-1].push_back(i);
	}
	teams = min(arr[0].size(), min(arr[1].size(), arr[2].size()));
	cout << teams << endl;
	for(int i = 0 ; i < teams ; i++)
		cout << arr[0][i] <<" "<< arr[1][i] <<" "<< arr[2][i] << endl;
	return 0;
}

