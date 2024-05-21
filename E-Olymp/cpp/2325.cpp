//Link: https://www.e-olymp.com/az/problems/2325

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a, b, result = 0;
	int count[10] = {0};
	cin >> a >> b;
	while(a != 0) {
		count[a % 10] += 1;
		a /= 10;
	}
	while(b != 0) {
		count[b % 10] += 1;
		b /= 10;
	}
	for(int i = 9 ; i >=0 ; i--) {
		if(count[i] != 0) {
			result *= 10;
			result += i;
			count[i] -= 1;
			i += 1;
		}
	}
	cout << result;
	return 0;
}
