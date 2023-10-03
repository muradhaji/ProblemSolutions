//Link: https://codeforces.com/problemset/problem/472/A

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
	if(n <= 1) return false;
	if(n <= 3) return true;
	if(n%2 == 0 || n%3 == 0) return false;
	for(int i = 5 ; i*i <= n ; i += 6)
		if(n%i == 0 || n%(i+2) == 0)
			return false;
	return true;
}

int main() {
	int n, a, b;
	cin >> n;
	a = n/2;
	b = n/2 + n%2;
	for( ; a != 3 ; a--, b++) {
		if(!isPrime(a) && !isPrime(b)) {
			cout << a << " " << b;
			return 0;
		}
	}
	return 0;
}
