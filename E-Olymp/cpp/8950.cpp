//Link: https://www.e-olymp.com/az/problems/8950

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k = 1, max;
	cin >> n;
	max = n/2;
	for(int i = 0 ; i < max; i++) {
		for(int j = 0 ; j < k ; j++)
			cout << "*";
		for(int j = 0 ; j < n-(2*k) ; j++)
			cout << " ";
		for(int j = 0 ; j < k ; j++)
			cout << "*";
		cout << endl;
		k++;
	}
	k--;
	if((n&1) == 1) {
		for(int i = 0; i < n ; i++)
			cout << "*";
		cout << endl;
	}
	for(int i = 0 ; i < max; i++) {
		for(int j = 0 ; j < k ; j++)
			cout << "*";
		for(int j = 0 ; j < n-(2*k) ; j++)
			cout << " ";
		for(int j = 0 ; j < k ; j++)
			cout << "*";
		cout << endl;
		k--;
	}
	
	return 0;
}
