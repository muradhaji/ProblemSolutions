//Link: https://codeforces.com/problemset/problem/59/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int lowercount = 0, uppercount = 0;
	string word, lowercase, uppercase;
	cin >> word;
	for(int i = 0 ; i < word.length() ; i++) {
		if(word[i] < 97) {
			uppercount += 1;
			lowercase += word[i] + 32;
			uppercase += word[i];
		}
		else {
			lowercount += 1;
			uppercase += word[i] - 32;
			lowercase += word[i];
		}
	}
	if(uppercount > lowercount)	cout << uppercase;
	else cout << lowercase;
	return 0;
}
