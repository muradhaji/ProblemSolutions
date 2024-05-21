//Link: https://www.e-olymp.com/az/problems/194

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, temp;
	vector<int> min, max;
	cin >> n;
	temp = n;
	for(int i = 9 ; i >= 2 ; i--) {
		while(temp % i == 0) {
			min.push_back(i);
			temp /= i;
		}
	}
	temp = n;
	for(int i = 2; i <= 9 ; i++) {
		while(temp % i == 0) {
			max.push_back(i);
			temp /= i;
		}
	}
	if(temp != 1)
		cout << "-1 -1";
	else {
		for(int i = min.size() - 1 ; i >= 0 ; i--)
			cout << min[i];
		cout << " ";
		for(int i = max.size() - 1 ; i >= 0 ; i--)
			cout << max[i];
	}
	return 0;
}
