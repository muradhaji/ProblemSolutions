//Link: https://www.e-olymp.com/az/problems/23

#include <bits/stdc++.h>
using namespace std;

int main() {
	unsigned long long n, k, result;
	cin >> n >> k;
	if(n == 1)
		cout << k;
	else if(k == 1 || ((n % 2 == 1) && (k == 2)))
		cout << "-1";
	else if((k == 2) && (n % 2 == 0))
		cout << "2";
	else if(n == 2)
		cout << k * (k-1);
	else {
		result = k * pow(k-1, n-2) * (k-2);
		printf("%llu", result);
	}
	return 0;
}
