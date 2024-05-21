//Link: https://www.e-olymp.com/az/problems/126

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, p, q, k, flatPerEntrance, flatPerFloor, entrance = 1, floor = 1;
	cin >> n >> p >> q >> k;
	flatPerEntrance = n / p;
	flatPerFloor = flatPerEntrance / q;
	while((k - flatPerEntrance) > 0) {
		k -= flatPerEntrance;
		entrance++;
	}
	while((k - flatPerFloor) > 0) {
		k -= flatPerFloor;
		floor++;
	}
	cout << entrance << " " << floor;
	return 0;
}
