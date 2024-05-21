//Link: https://www.e-olymp.com/az/problems/836

#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, n, flag = 0;
	cin >> m >> n;
	bool primes[n+1];

	for(int i = 0 ; i <= n ; i++)
		primes[i] = true;

	for(int i = 2 ; i <= n ; i++)
		if(primes[i] == true)
			for(int j = 2*i ; j <= n ; j += i)
				primes[j] = false;
	
	for(int i = m ; i <= n ; i++) {
		if(primes[i] == true) {
			flag = 1;
			cout << i << endl;
		}
	}
	
	if(flag == 0)
		cout << "Absent";
	
	return 0;
}
