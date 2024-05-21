//Link: https://www.e-olymp.com/az/problems/123

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, start = 5, end, i, count = 0, x;
	cin >> n;
	end = n - (n % 5);
	for(i = start ; i <= end ; i += 5) {
		x = i;
		while(x % 5 == 0) {
			x /= 5;
			count++;
		}
	}
	cout << count;
	return 0;
}
