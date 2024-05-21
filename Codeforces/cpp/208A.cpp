//Link: https://codeforces.com/problemset/problem/208/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	vector <string> result;
	string s, word = "";
	cin >> s;
	for(int i = 0 ; i < s.length() ; i++) {
		if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
			if(word != "") {
				result.push_back(word);
				word = "";
			}
			i += 2;
		}
		else word += s[i];
	}
	if(word != "") result.push_back(word);
	for(int i = 0 ; i < result.size() ; i++)
		cout << result[i] << " ";
	return 0;
}
