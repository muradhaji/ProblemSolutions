//Link: https://www.e-olymp.com/az/problems/141

#include <bits/stdc++.h>
using namespace std;

int counter(int n) {
	int sum = 0;
	while(n != 0) {
		sum += n%10;
		n /= 10;
	}
	return sum;
}

int main() {
	
	int m, n, i, counts[55] = {0};
	
	cin >> m >> n;
	
	for(i = m ; i <= n ; i++)
		counts[counter(i)] += 1;
		
	for(i = 0 ; i < 56 ; i++) {
		if(counts[i] != 0) {
			cout << counts[i];
			break;
		}
	}
	
	return 0;
}
