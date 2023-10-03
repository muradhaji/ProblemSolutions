//Link: https://codeforces.com/problemset/problem/158/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, i, count = 0;
	cin >> n >> k;
	int arr[n];
	for(i = 0 ; i < n ; i++)
		cin >> arr[i];
	for(i = 0 ; i < n ; i++)
		if(arr[i] >= arr[k-1] && arr[i] > 0) count++;
		else break;
	cout << count;
	return 0;
}
