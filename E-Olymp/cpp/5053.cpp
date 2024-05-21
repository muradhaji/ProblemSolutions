//Link: https://www.e-olymp.com/az/problems/5053

#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, sum = 0;
	cin >> k;
	char n;
	n = getchar();
	while(true) {
		n = getchar();
		if(n == '\n')
			break;
		switch(n) {
			case '0':
				sum = sum*10 + 0;
				break;
			case '1':
				sum = sum*10 + 1;
				break;
			case '2':
				sum = sum*10 + 2;
				break;
			case '3':
				sum = sum*10 + 3;
				break;
			case '4':
				sum = sum*10 + 4;
				break;
			case '5':
				sum = sum*10 + 5;
				break;
			case '6':
				sum = sum*10 + 6;
				break;
			case '7':
				sum = sum*10 + 7;
				break;
			case '8':
				sum = sum*10 + 8;
				break;
			case '9':
				sum = sum*10 + 9;
				break;
		}
		sum = sum % k;
	}
	cout << sum;
	return 0;
}
