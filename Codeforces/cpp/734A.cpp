//Link: https://codeforces.com/problemset/problem/734/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, anton = 0, danik = 0;
	string s;
	cin >> n >> s;
	for(int i = 0 ; i < n ; i++)
		if(s[i] == 'A') anton += 1;
		else danik += 1;
	if(anton > danik) cout << "Anton";
	else if(danik > anton) cout << "Danik";
	else cout << "Friendship";
	return 0;
}
