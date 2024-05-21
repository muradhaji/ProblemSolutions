//Link: https://www.e-olymp.com/az/problems/70

#include <bits/stdc++.h>
using namespace std;

int solution(int current, int k, int n, int lvl, int step) {
	int sum = 0, u, u_r, d_r;
	if(current > n){
		return 0;
	}
	else if(current == n)
		return 1;
	else{
		if((lvl+1) < k)
			step += lvl;
		else if((lvl+1) > k)
			step -= (lvl%k) + 1;
		u = current+step;
		u_r = u + 1;
		d_r = current + 1;
		printf("u: %d, r: %d, d: %d\n",u, u_r, d_r);
		sum += solution(u, k + 1, n, lvl+1, step);
		sum += solution(u_r, k + 1, n, lvl+1, step);
		sum += solution(d_r, k + 1, n, lvl+1, step);
	}
	return sum;
}

int main() {
	int k, n, up = 1, up_right = 1, down_right = 1;
	cin >> k >> n;
	cout << solution(1, k, n, 0, k);
	return 0;
}
