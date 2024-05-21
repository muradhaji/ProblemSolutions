//Link: https://www.e-olymp.com/az/problems/69

#include <bits/stdc++.h>
using namespace std;

bool compare(vector<int> a, vector<int> b) {
	if(a.size() != b.size())
		return false;
	for(int i = 0 ; i < a.size() ; i++)
		if(a[i] != b[i])
			return false;
	return true;
}

int main() {
	int n, m, x, step, k, count = 0;
	cin >> n >> m;
	vector<int> a, b;
	for(int i = 0 ; i < n ; i++) {
		cin >> x;
		a.push_back(x);
	}
	for(int i = 0 ; i < m ; i++) {
		cin >> x;
		b.push_back(x);
	}
	while( !compare(a, b) ) {
		step = a[0];
		a.erase(a.begin());
		k = 0;
		while(k < a.size() && step != 0) {
			a[k] += 1;
			k += 1;
			step -= 1;
		}
		while(step != 0) {
			a.push_back(1);
			step -= 1;
		}
		count += 1;
	}
	cout << count;
	return 0;
}
