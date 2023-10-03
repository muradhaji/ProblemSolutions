//Link: https://www.e-olymp.com/az/problems/958

#include <bits/stdc++.h>
using namespace std;

int main() {
	double b, alpha, beta, H, h, diagonal, a;
	cin >> b >> alpha;
	
	H = (b * sin(M_PI * alpha / 180)) / sin(M_PI * 90 / 180);
	beta = 90 - alpha;
	diagonal = (b * sin(M_PI * beta / 180)) / sin(M_PI * 90 / 180);
	a = 2 * diagonal / sqrt(2);
	h = sqrt(pow(H, 2) + pow(a/2, 2));
	
	printf("%.3f",a*a + 4*0.5*a*h);
	
	return 0;
}
