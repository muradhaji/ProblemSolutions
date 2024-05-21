//Link: https://www.e-olymp.com/az/problems/10080

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, max;
	cin >> n >> m;
	max = n*m;
	if((n&1) == 1) {
		for(int i = max - m + 1 ; i <= max ; i++)
			cout << max << " ";
		cout << endl;
		max -= m;
		n -= 1;
	}
	for(int i = 0 ; i < n/2 ; i++) {
		for(int j = )
	}
	
	return 0;
}
