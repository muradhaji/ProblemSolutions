//Link: https://codeforces.com/problemset/problem/148/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int klmn[4], d, t, count = 0;
	cin >> klmn[0] >> klmn[1] >> klmn[2] >> klmn[3] >> d;
	vector <bool> arr(d+1, false);
	for(int i = 0 ; i < 4 ; i++) {
		if(arr[klmn[i]] == false) {
			for(int j = klmn[i] ; j <= d ; j += klmn[i])
				arr[j] = true;
		}
	}
	for(int i = 1 ; i < d+1 ; i++)
		count += arr[i];
	cout << count;
	return 0;
}
