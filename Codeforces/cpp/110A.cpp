//Link: https://codeforces.com/problemset/problem/110/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int count = 0;
	string s;
	cin >> s;
	for(int i = 0 ; i < s.length() ; i++)
		if(s[i] == '4' || s[i] == '7')
			count += 1;
	if(count == 4 || count == 7)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
