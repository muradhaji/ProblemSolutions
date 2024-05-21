//Link: https://www.e-olymp.com/az/problems/382

#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, k, m;
    cin >> n >> k >> m;
    while(n - k > 0) {
        n -= k;
        k += m;
    }
    cout << n;
    return 0;
}
