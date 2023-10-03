//Link: https://www.e-olymp.com/az/problems/138

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int banknotes[] = {500,200,100,50,20,10}, count = 0, i, n ;
	
	cin >> n;
	
	for(i = 0 ; i < 6 ; i++) {
		count += n / banknotes[i];
		n -= (n / banknotes[i]) * banknotes[i];
	}
	
	if(n == 0)
		cout << count;
	else
		cout << -1;
	
	return 0;
}
