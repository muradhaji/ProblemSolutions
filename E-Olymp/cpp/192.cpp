//Link: https://www.e-olymp.com/az/problems/192

#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
	if(n < 2)
		return false;
	if(n < 4)
		return true;
	if(n % 2 == 0 || n % 3 == 0)
		return false;
	for(int d = 5 ; d * d <= n ; d += 6)
		if(n % d == 0 || n % (d+2) == 0)
			return false;
	return true;
}

int main() {
	int n, fibo = 0, a = 1, b = 0;
	cin >> n;
	
	while(n != 0) {
		fibo = a + b;
		a = b;
		b = fibo;
		if(is_prime(fibo))
			n -= 1;
	}
	
	cout << fibo;
	
	return 0;
}
