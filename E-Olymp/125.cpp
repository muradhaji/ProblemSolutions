//Link: https://www.e-olymp.com/az/problems/125

#include <bits/stdc++.h>
using namespace std;

int main() {
	int h1, m1, s1, h2, m2, s2, total;
	cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
	total = (h2*3600 + m2*60 + s2) - (h1*3600 + m1*60 + s1);
	cout << total/3600 << " " << (total%3600)/60 << " " << (total%3600)%60;
	return 0;
}
