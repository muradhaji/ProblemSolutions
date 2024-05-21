//Link: https://codeforces.com/problemset/problem/25/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, num, odd_count = 0, even_count = 0, odd_index, even_index;
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		cin >> num;
		if(num % 2 == 1) {
			odd_count += 1;
			odd_index = i + 1;
		}
		else {
			even_count += 1;
			even_index = i + 1;
		}
		if(odd_count > 1 && even_count != 0) {
			cout << even_index;
			break;
		}
		if(even_count > 1 && odd_count != 0) {
			cout << odd_index;
			break;
		}
	}
	return 0;
}
