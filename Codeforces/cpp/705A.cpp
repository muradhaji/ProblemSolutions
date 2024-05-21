//Link: https://codeforces.com/problemset/problem/705/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	string result = "", hate = "I hate ", love = "I love ", that = "that ", it = "it";
	int n, h_count = 0, l_count = 0, t_count = 0;
	cin >> n;
	h_count += (int)n/2;
	l_count += (int)n/2;
	t_count = n-1;
	if(n % 2 == 1) h_count += 1;
	while(h_count != 0 || l_count != 0 || t_count != 0) {
		if(h_count != 0) {
			result += hate;
			h_count -= 1;
		}
		if(t_count != 0) {
			result += that;
			t_count -= 1;
		}
		if(l_count != 0) {
			result += love;
			l_count -= 1;
		}
		if(t_count != 0) {
			result += that;
			t_count -= 1;
		}
	}
	result += it;
	cout << result;
	return 0;
}
