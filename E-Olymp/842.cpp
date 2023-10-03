//Link: https://www.e-olymp.com/az/problems/842

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<int> primes;
    cin >> n;
    
    while(n % 2 == 0) {
    	primes.push_back(2);
        n /= 2;
    }
    
    for(int i = 3; i <= sqrt(n); i += 2) {
        while(n % i == 0) {
            primes.push_back(i);
            n /= i;
        }
    }
    
    if(n > 2)
        primes.push_back(n);
    
	for(int i = 0 ; i < primes.size() - 1; i++)
		cout << primes[i] << "*";
	cout << primes[primes.size() - 1];
		
    return 0;
}
