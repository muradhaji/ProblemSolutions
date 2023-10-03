//Link: https://www.e-olymp.com/az/problems/9398

#include <bits/stdc++.h>
using namespace std;

long long solve(long long x) {
	long long d;
	if(x % 2 == 0)
		return 2;
	if(x % 3 == 0)
		return 3;
	for(d = 5 ; d*d <= x ; d += 5) {
		if(x % d == 0)
			return d;
		if(x % (d+2) == 0)
			return d+2;
	}
	return x;
}

int main() {
	long long x;
	cin >> x;
	cout << solve(x);
	return 0;
}
