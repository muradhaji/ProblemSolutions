//Link: https://www.e-olymp.com/az/problems/8952

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, l, r, k = 0;
	cin >> n;
	if((n&1) == 1)
		l = r = n/2;
	else {
		r = n/2;
		l = r-1;
	}
	for(int i = 0 ; i < n/2 ; i++){
		for(int j = 0 ; j < n ; j++) {
			if(j >= l-k && j <= r+k)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
		k++;
	}
	if((n&1) == 1) {
		for(int j = 0 ; j < n ; j++) {
			if(j >= 0 && j <= n-1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	k--;
	for(int i = 0 ; i < n/2 ; i++){
		for(int j = 0 ; j < n ; j++) {
			if(j >= l-k && j <= r+k)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
		k--;
	}
	return 0;
}
