//Link: https://www.e-olymp.com/az/problems/144

#include <bits/stdc++.h>
using namespace std;

int scalar(int x0, int y0, int x1, int y1, int x2, int y2) {
	return ((x1-x0) * (x2-x0)) + ((y1 - y0) * (y2 - y0));
}

int main() {
	int ax, ay, bx, by, cx, cy, dx, dy, count = 0;
	cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;
	
	if(scalar(ax, ay, bx, by, dx, dy) == 0)
		count++;
	if(scalar(bx, by, ax, ay, cx, cy) == 0)
		count++;
	if(scalar(cx, cy, bx, by, dx, dy) == 0)
		count++;
	if(scalar(dx, dy, cx, cy, ax, ay) == 0)
		count++;
		
	cout << count;
	return 0;
}
