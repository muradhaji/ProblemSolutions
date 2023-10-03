//Link: https://www.e-olymp.com/az/problems/5023

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, p, say = 0, flag = 0, qaliq;
	cin >> n >> p;
	int a[n] = {0};
	for(int i = 0 ; i < n ; i++) {
		if(a[i] == 0)
			say++;
		qaliq = (p % (n - flag));
		if(qaliq == 0)
			qaliq = n-flag;
		if(say == qaliq) {
			a[i] = 1;
			say = 0;
			flag++;
		}
		if(i == n-1)
			i = -1;
		if(flag == n-1)
				break;
	}
	for(int i = 0 ; i < n ; i++) {
		if(a[i] == 0) {
			cout << i+1;
			return 0;
		}
	}
	return 0;
}
