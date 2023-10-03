//Link: https://codeforces.com/problemset/problem/131/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int lower_count = 0;
	string word;
	cin >> word;
	for(int i = 0 ; i < word.length() ; i++)
		lower_count += (word[i] >= 'a');
	if(lower_count == 0 || (lower_count == 1 && word[0] >= 'a')) {
		for(int i = 0 ; i < word.length() ; i++) {
			if(word[i] < 'a') word[i] += 32;
			else word[i] -= 32;
		}
	}
	cout << word;
	return 0;
}
