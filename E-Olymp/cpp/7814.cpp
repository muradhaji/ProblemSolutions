//Link: https://www.e-olymp.com/az/problems/7814

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, min, a. b, c;
	cin >> n;
	min = n;
	a = n / 10;
	b = (n/100)*10 + n%10;
	c = n%100;
	if(a < min && a > 9)
		min = a;
	if(b < min && b > 9)
		min = b;
	if(c < min && c > 9)
		min = c;
	cout << min;
	return 0;
}
