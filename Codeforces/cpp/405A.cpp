//Link: https://codeforces.com/problemset/problem/405/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a;
	cin >> n;
	int arr[n];
	for(int i = 0 ; i < n ; i++)
		cin >> arr[i];
	sort(arr, arr+n);
	for(int i = 0 ; i < n ; i++)
		cout << arr[i] << " ";
	return 0;
}
