//Link: https://www.e-olymp.com/az/problems/33

#include <bits/stdc++.h>
using namespace std;

bool control(int n) {
	int l;
	l = n % 10;
	n /= 10;
	while(n != 0) {
		if((n % 10 == 1) && (l == 3))
			return true;
		l = n % 10;
		n /= 10;
	}
	return false;
}

int main() {
	
	int a, b, i, n, count = 0;
	cin >> a >> b;
	int sadeler[b+1] = {0};
	
	for(i = 2 ; i <= sqrt(b) ; i++) {
		if(sadeler[i] == 0) {
			n = i*2;
			while(n <= b) {
				sadeler[n] = 1;
				n += i;
			}
		}
	}
	if (a == 1)
		a = 2;
	for(i = a ; i <= b ; i++) {
		if(sadeler[i] == 0) {
			if(control(i) == false) {
				count++;
				if(i > 2)
					i++;
			}
		}
	}
	
	cout << count;
	
	return 0;
}
