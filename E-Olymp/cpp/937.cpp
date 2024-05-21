//Link: https://www.e-olymp.com/az/problems/937

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long product = 1;
	int n, count_zero = 0, index_zero;
	cin >> n;
	int in[n], out[n] = {0};
	
	for(int i = 0 ; i < n ; i++) {
		cin >> in[i];
		if(in[i] == 0) {
			count_zero += 1;
			if(count_zero == 2)
				break;
			index_zero = i;
		}
		else 
			product *= in[i];
	}
	
	if(count_zero == 1)
		out[index_zero] = product;
	
	if(count_zero == 0)
		for(int i = 0 ; i < n ; i++)
			out[i] = product/in[i];
	
	for(int i = 0 ; i < n ; i++)
		cout << out[i] << " ";
		
	return 0;
}
