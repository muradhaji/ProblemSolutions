//Link: https://codeforces.com/problemset/problem/160/A

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	int n, left = 0, right = 0;
	cin >> n;
	int arr[n];
	for(int i = 0 ; i < n ; i++) {
		cin >> arr[i];
		right += arr[i];
	}
	sort(arr,arr+n);
	for(int i = n-1 ; i >= 0 ; i--) {
		left += arr[i];
		right -= arr[i];
		if(left > right) {
			cout << n - i;
			return 0;
		}
	}
	return 0;
}
