//Link: https://codeforces.com/problemset/problem/230/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int s, n, x, y, size;
	cin >> s >> n;
	vector<pair<int,int>> dragons;
	for(int i = 0 ; i < n ; i++) {
		cin >> x >> y;
		dragons.push_back(make_pair(x,y));
	}
	while(dragons.size() != 0) {
		size = dragons.size();
		for(int i = 0 ; i < dragons.size() ; i++) {
			if(dragons[i].first < s) {
				s += dragons[i].second;
				dragons.erase(dragons.begin() + i);
				i--;
			}
		}
		if(size == dragons.size()) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
