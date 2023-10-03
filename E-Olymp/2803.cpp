//Link: https://www.e-olymp.com/az/problems/2803

#include <bits/stdc++.h>
using namespace std;

int main() {
	char s;
	while(true) {
		s = getchar();
		if(s == '\n')
			return 0;
		switch(s) {
			case '0':
				printf("1");
				break;
			case '1':
				printf("2");
				break;
			case '2':
				printf("3");
				break;
			case '3':
				printf("4");
				break;
			case '4':
				printf("5");
				break;
			case '5':
				printf("6");
				break;
			case '6':
				printf("7");
				break;
			case '7':
				printf("8");
				break;
			case '8':
				printf("9");
				break;
			case '9':
				printf("0");
				break;
			default:
				printf("%c",s);
				break;
		}
	}
    return 0;
}
