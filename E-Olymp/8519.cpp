//Link: https://www.e-olymp.com/az/problems/8519

#include <bits/stdc++.h>
using namespace std;

int main() {
	char s;
	long long sum = 0;
	while(true) {
		s = getchar();
		if( s == '\n')
			break;
		switch(s) {
			case '2':
				sum += 2;
				break;
			case '4':
				sum += 4;
				break;
			case '6':
				sum += 6;
				break;
			case '8':
				sum += 8;
				break;
		}
	}
	cout << sum;
	return 0;
}
