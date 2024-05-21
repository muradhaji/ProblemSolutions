//Link: https://codeforces.com/problemset/problem/1343/B

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	for( ; t != 0 ; t--) {
		cin >> n;
		if((n/2)%2 == 1) cout << "NO" << endl;
		else {
			vector<int> arr;
			cout << "YES" << endl;
			for(int a = 1 ; a <= n/2 ; a++)
				arr.push_back(a*2);
			for(int a = 0 ; a < n/2; a++)
				arr.push_back(a*2+1);
			arr[arr.size()-1] += n/2;
			for(int a : arr)
				cout << a << " ";
			cout << endl;
		}
	}
	return 0;
}

