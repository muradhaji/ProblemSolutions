//Link: https://www.e-olymp.com/az/problems/15

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	char path[204];
	int a[102][102];
	int m, n, i, j, k, temp;
	memset(a,-1,sizeof(a));
	
	cin >> m >> n;
	
	for(i = 1 ; i <= m ; i++)
		for(j = 1 ; j <= n ; j++)
			cin >> a[i][j];
			
	for(i = m ; i > 0 ; i--) {
		for(j = 1 ; j <= n ; j++) {
			temp = max(a[i+1][j], a[i][j-1]);
			if(temp < 0) temp = 0;
			a[i][j] += temp;
		}
	}
	
	i = 1;
	j = n;
	k = 0;
	
	while(i <= m && j > 0) {
		if(i == m && j == 1) break;
		if(a[i][j-1] >= a[i+1][j]) {
			path[k++] = 'R';
			j--;
		}
		else {
			path[k++] = 'F';
			i++;
		}
	}
	
	while(k--)
		cout << path[k];
	
	return 0;
}
