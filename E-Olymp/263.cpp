//Link: https://www.e-olymp.com/az/problems/263

#include <bits/stdc++.h>
using namespace std;

int my_pow(int x, int y, int r) {
	int product = 1;
	for(int i = 0 ; i < y ; i++) {
		product *= x;
		product %= r;
	}
	return product;
}

int main() {
	int n, count, left, right, useless;
	cin >> n;
	count = my_pow(2, n, 12345);
	left = n - 3;
	right = -1;
	while(left >= 0) {
		useless = 1;
		if(left > 0)
			useless += my_pow(2, left, 1000000000) - 1;
		if(right > 0)
			useless += my_pow(2, right, 1000000000) - 1;
		count -= useless;
		left--;
		right++;
	}
	cout << abs(count);
	return 0;
}
