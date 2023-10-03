//Link: https://codeforces.com/problemset/problem/271/A

#include <bits/stdc++.h>
using namespace std;

bool is_distinct(int y) {
	int list[10] = {0};
	while(y > 0) {
		list[y%10] += 1;
		y /= 10;
	}
	for(int i = 0 ; i < 10 ; i++)
		if(list[i] > 1) return false;
	return true;
}

int main() {
	int y;
	cin >> y;
	while(true) {
		y += 1;
		if(is_distinct(y) == true) break;
	}
	cout << y;
	return 0;
}
