//Link: https://www.e-olymp.com/az/problems/129

#include <bits/stdc++.h>
using namespace std;

int main() {
	int r, count = 0;
	cin >> r;
	for(int i = 1 ; i <= r ; i++)
		for(int j = 1 ; j <= r ; j++)
			if((i*i + j*j) <= r*r)
				count++;
	cout << 4*count;
	return 0;
}
