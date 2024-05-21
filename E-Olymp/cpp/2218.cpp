//Link: https://www.e-olymp.com/az/problems/2218

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, sum1 = 0, sum0 = 0;
    cin >> n;
    while(n != 0) {
        cin >> k;
        if(k == 1)
            sum1++;
        else
            sum0++;
        n--;
    }
    if(sum1 > sum0)
        cout << sum0;
    else
        cout << sum1;
    return 0;
}
