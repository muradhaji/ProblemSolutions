//Link: https://codeforces.com/problemset/problem/118/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	char c;
	cin >> s;
	for(int i = 0 ; i < s.size() ; i++) {
		c = s[i];
		if(c != 'A' && c != 'O' && c != 'Y' && c != 'O' && c != 'E' && c != 'U' && c != 'I' &&
		   c != 'a' && c != 'o' && c != 'y' && c != 'o' && c != 'e' && c != 'u' && c != 'i') {
		   	if(isupper(c))
		   		cout << '.' << (char)tolower(c);
		   	else
		   		cout << '.' << c;
		}
	}
	return 0;
}
