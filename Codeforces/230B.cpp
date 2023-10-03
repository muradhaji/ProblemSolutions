//Link: https://codeforces.com/problemset/problem/230/B

#include <bits/stdc++.h>
using namespace std;

bool primes[1000001];

void sieveOfEratosthenes() {
	memset(primes, true, sizeof(primes));
	primes[0] = false;
	primes[1] = false;
	for(int i = 2 ; i * i <= 1000000 ; i++)
		if(primes[i] == true)
			for(int j = i*i ; j <= 1000000 ; j += i)
				primes[j] = false;
}

long long isPerfectSquare(long long x) {
	long long root = sqrt(x);
	if(pow(root,2) == x) return root;
	else return 0;
}

int main() {
	sieveOfEratosthenes();
	long long n, x;
	cin >> n ;
	for(int i = 0 ; i < n ; i++) {
		cin >> x;
		if(primes[isPerfectSquare(x)] == true)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
