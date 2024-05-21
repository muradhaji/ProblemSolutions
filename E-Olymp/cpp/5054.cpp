//Link: https://www.e-olymp.com/az/problems/5054

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	if(n % 400 == 0)
		cout << "YES";
	else if(n % 100 == 0)
		cout << "NO";
	else if(n % 4 == 0)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
