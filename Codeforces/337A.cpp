//Link: https://codeforces.com/problemset/problem/337/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, min = INT_MAX;
	cin >> n >> m;
	int arr[m];
	for(int i = 0 ; i < m ; i++)
		cin >> arr[i];
	sort(arr, arr+m);
	for(int i = 0 ; i < m - n + 1 ; i++)
		if(arr[i + n - 1] - arr[i] < min)
			min = arr[i + n - 1] - arr[i];
	cout << min;
	return 0;
}
