//Link: https://codeforces.com/problemset/problem/155/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, score, min, max, count = 0;
	cin >> n >> score;
	min = max = score;
	for( ; n != 1 ; n--) {
		cin >> score;
		if(score < min) {
			min = score;
			count++;
		}
		else if(score > max) {
			max = score;
			count++;
		}
	}
	cout << count;
	return 0;
}
