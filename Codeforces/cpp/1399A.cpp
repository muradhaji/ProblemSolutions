//Link: https://codeforces.com/problemset/problem/1399/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n , a, isTrue;
	vector<int> arr;
	cin >> t;
	for( ; t != 0 ; t--) {
		cin >> n;
		arr.clear();
		isTrue = 1;
		for( ; n != 0 ; n--) {
			cin >> a;
			arr.push_back(a);
		}
		sort(arr.begin(), arr.end());
		for(int i = 1 ; i < arr.size() ; i++) {
			if(arr[i]-arr[i-1] > 1) {
				isTrue = 0;
				break;
			}
		}
		if(isTrue) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
