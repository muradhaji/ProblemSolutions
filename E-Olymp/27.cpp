//Link: https://www.e-olymp.com/az/problems/27

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, max, base, k = 0;
	cin >> n;
	max = n;
	while(pow(2, k) < n) {
		base = pow(2, k);
		k += 1;
	}
	k -= 1;
	for(int i = 0 ; i < k ; i++) {
		if((n - base) == 0)
			break;
		else if((n - base) > 0) {
			n -= base;
			n <<= 1;
			n += 1;
		}
		else
			n <<= 1;
		if(n > max)
			max = n;
	}
	cout << max;
	return 0;
}
