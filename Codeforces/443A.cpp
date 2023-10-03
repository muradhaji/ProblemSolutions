//Link: https://codeforces.com/problemset/problem/443/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	set <int> distinct;
	string s;
	getline(cin, s);
	for(char ch : s)
		if(islower(ch)) distinct.insert(ch);
	cout << distinct.size();
	return 0;
}
