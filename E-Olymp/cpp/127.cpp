//Link: https://www.e-olymp.com/az/problems/127

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long s, sum = 0, birthday = 1, gift = 0, day = 0;
	cin >> s;
	while(sum < s) {
		gift = gift*2 + birthday;
		sum += gift;
		birthday++;
		day++;
	}
	cout << day;
	return 0;
}
