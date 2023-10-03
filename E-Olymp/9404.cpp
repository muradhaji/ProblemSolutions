//Link: https://www.e-olymp.com/az/problems/9404

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < n ; j++) {
			if((j == i || (i+j) == n-1) || (i == 0 || i == n-1 || j == 0 || j == n-1))
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}
