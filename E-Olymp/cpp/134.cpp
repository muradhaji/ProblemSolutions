//Link: https://www.e-olymp.com/az/problems/134

#include <bits/stdc++.h>
using namespace std;

int main() {
	int x1, y1, r1, x2, y2, r2, i, j, d1, d2, count = 0;
	cin>> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	for(i = -200 ; i <= 200 ; i++) {
		for(j = -200 ; j <= 200 ; j++) {
			d1 = ((x1 - i)*(x1 - i)) + ((y1 - j)*(y1 - j));
			d2 = ((x2 - i)*(x2 - i)) + ((y2 - j)*(y2 - j));
			if(d1 <= r1*r1 || d2 <= r2*r2)
				count++;
		}
	}
	cout << count;
	return 0;
}
