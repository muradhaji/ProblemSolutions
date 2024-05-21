//Link: https://www.e-olymp.com/az/problems/113

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x;
	cin >> n;
	int arr[10] = {0}, max = 0;
	for(int i = 0 ; i < n ; i++){
		cin >> x;
		arr[x] += 1;
		if(arr[x] > max)
			max = arr[x];
	}
	cout << n - max;
	return 0;
}
