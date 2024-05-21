//Link: https://www.e-olymp.com/az/problems/555

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i, x, left_i, right_i, left_v, right_v, i1, i2, min = INT_MAX;
	cin >> n;
	vector< pair<int,int> > a;
	for(i = 0 ; i < n ; i++) {
		cin >> x;
		a.push_back(make_pair(x,i+1));
	}
	sort(a.begin(), a.end());
	left_i = 0;
	left_v = a[0].first;
	for(i = 1 ; i < n ; i++) {
		right_i = i;
		right_v = a[i].first;
		if(right_v - left_v < min) {
			min = right_v - left_v;
			i1 = a[left_i].second;
			i2 = a[right_i].second;
		}
	}
	cout << min << endl;
	if(i1 < i2)
		cout << i1 << " " << i2;
	else
		cout << i2 << " " << i1;
	return 0;
}
