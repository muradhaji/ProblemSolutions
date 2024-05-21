//Link: https://www.e-olymp.com/az/problems/8595

#include <bits/stdc++.h>
using namespace std;

long long fact(int n) {
	long long result = 1;
	for(int i = 2 ; i <= n ; i++)
		result = (result*i) % 1000000007;
	return result;
}

int main() {
    long long n, m, f;
    cin >> n >> m;
    if(m > n) {
    	m = m ^ n;
    	n = m ^ n;
    	m = m ^ n;
	}
    if(n - m > 1) {
        cout << "0";
        return 0;
    }
    else {
        if(n == m) {
        	f = fact(n);
        	f = (f * f) % 1000000007;
        	f = (f * 2) % 1000000007;
        }
        else
        	f = (fact(n) * fact(m)) % 1000000007;
    }
    cout << f;
    return 0;
}
