//Link: https://www.e-olymp.com/az/problems/9098

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long l, r, l_q, r_q, result = 0;
	cin >> l >> r;
	l_q = l % 4;
	r_q = r % 4;
	
	if(l_q == 1)
		result ^= (l) ^ (l+1) ^ (l+2);
	else if(l_q == 2)
		result ^= (l) ^ (l+1);
	else if(l_q == 3)
		result ^= l;
	
	if(r_q == 0)
		result ^= r;
	else if(r_q == 1)
		result ^= (r) ^ (r-1);
	else if(r_q == 2)
		result ^= (r) ^ (r-1) ^ (r-2);
	cout << result;
	return 0;
}
