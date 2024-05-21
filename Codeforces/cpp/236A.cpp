//Link: https://codeforces.com/problemset/problem/236/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int letters[26] = {0}, distinct;
	string name;
	cin >> name;
	for(int i = 0 ; i < name.length() ; i++)
		letters[name[i] - 97] = 1;
	for(int i = 0 ; i < 26 ; i++)
		distinct += letters[i];
	if(distinct & 1 == 1) cout << "IGNORE HIM!";
	else cout << "CHAT WITH HER!";
	return 0;
}
