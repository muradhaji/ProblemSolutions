//Link: https://codeforces.com/problemset/problem/706/B

#include <bits/stdc++.h>
using namespace std;

int upperBound(int m, int arr[], int n) {
	int l = 0, r = n - 1, mid;
	while(l <= r) {
		mid = (l + r) / 2;
		if(m >= arr[mid]) l = mid + 1;
		else if(m < arr[mid]) r = mid - 1;
	}
	return l;
}

int main() {
	int n, q, m, prices[100000], count;
	cin >> n;
	for(int i = 0 ; i < n ; i++)
		cin >> prices[i];
	sort(prices, prices + n);
	cin >> q;
	while(q--) {
		cin >> m;
		cout << upperBound(m, prices, n) << endl;
	}
	return 0;
}

