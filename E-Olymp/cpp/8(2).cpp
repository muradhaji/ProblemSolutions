//Link: https://www.e-olymp.com/az/problems/8

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, width, height, remainder, result;
	
	cin >> n;
	
	width = sqrt(n);
	height = n / width;
	remainder = n - width*height;
	
	result = width * (height + 1) + height * (width+1);
	if(remainder) result += remainder * 2 + 1;
	
	cout << result;
	
	return 0;
}
