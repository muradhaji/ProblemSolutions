//Link: https://codeforces.com/problemset/problem/122/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, lucky[] = {4, 44, 47, 444, 447, 474, 477, 7, 77, 74, 777, 774, 747, 744};
	cin >> n;
	for(int i = 0 ; i < 14 ; i++) {
		if(n % lucky[i] == 0) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
