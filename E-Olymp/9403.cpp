//Link: https://www.e-olymp.com/az/problems/9403

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	n = n*2 - 1;
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < n ; j++) {
			if(j == i || (i+j) == n-1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}
