//Link: https://codeforces.com/problemset/problem/4/C

#include <bits/stdc++.h>
using namespace std;

string addUser(vector<pair<string,int>> &names, string newname) {
	for(auto &name : names) {
		if(name.first == newname) {
			name.second++;
			return name.first + to_string(name.second);
		}
	}
	names.push_back(make_pair(newname, 0));
	return "OK";
}

int main() {
	vector<pair<string,int>> names;
	string newname;
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		cin >> newname;
		cout << addUser(names, newname) << endl;
	}
	return 0;
}
