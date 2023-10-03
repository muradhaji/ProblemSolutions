//Link: https://www.e-olymp.com/az/problems/117

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n, m, log, count, i;
	cin >> n >> m;
	int logs[n];
	for(int i = 0 ; i < n ; i++)
		cin >> logs[i];
		
	sort(logs, logs + n);
	log = logs[n-1];
	
	for(i = log ; i >= 1 ; i--) {
		count = 0;
		for(int j = n-1 ; j >= 0 ; j--) {
			if(logs[j] / i >= 1) {
				count += logs[j] / i;
				if(count >= m){
					cout << i;
					return 0;
				}
			}
			else break;
		}
	}
	
	cout << 0;
	
	return 0;
}
