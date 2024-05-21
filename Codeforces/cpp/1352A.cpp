//Link: https://codeforces.com/problemset/problem/1352/A

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n, m, k, size;
	cin >> t;
	for( ; t != 0 ; t--) {
		cin >> n;
		size = to_string(n).length();
		k = 0;
		m = n;
		for(int i = 0 ; i < size ; i++) {
			if(m % 10 != 0) k++;
			m /= 10;
		}
		cout << k << endl;
		for(int i = 0 ; i < size ; i++) {
			if(n % 10 != 0) {
				cout << n%10 * pow(10,i) << " ";
			}
			n /= 10;
		}
		cout << endl;
	}
	return 0;
}
