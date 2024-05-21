//Link: https://codeforces.com/problemset/problem/520/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	set <char> distinct;
	string sentence;
	cin >> sentence;
	for(char ch : sentence) {
		if(isupper(ch)) distinct.insert(tolower(ch));
		else distinct.insert(ch);
	}
	if(distinct.size() == 26) cout << "YES";
	else cout << "NO";
	return 0;
}
