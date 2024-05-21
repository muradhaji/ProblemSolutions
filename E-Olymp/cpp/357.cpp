//Link: https://www.e-olymp.com/az/problems/357

#include <bits/stdc++.h>
using namespace std;

int main() {
	double a, max = INT_MIN;
	while(cin >> a)
		if(a > max)
			max = a;
	printf("%.2lf",max);
	return 0;
}
