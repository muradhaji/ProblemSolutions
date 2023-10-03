//Link: https://www.e-olymp.com/az/problems/85

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, b, r = 0, c = 0, level, lvl = 0, max_num, num = 1, i, j;
	cin >> n >> a >> b;
	max_num = n*n;
	int arr[n][n];
	if((n&1) == 1)
		level = (n+1)/2;
	else
		level = n/2;
	while(lvl < level) {
		r = lvl;
		c = lvl;
		while(c < n-lvl)
			arr[r][c++] = num++;
		c--;
		r++;
		while(r < n-lvl)
			arr[r++][c] = num++;
		c--;
		r--;
		while(c >= lvl)
			arr[r][c--] = num++;
		r--;
		c++;
		while(r > lvl)
			arr[r--][c] = num++;
		r++;
		lvl++;
	}
	cout << arr[a-1][b-1];
	return 0;
}
