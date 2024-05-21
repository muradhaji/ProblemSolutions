//Link: https://www.e-olymp.com/az/problems/179

#include<bits/stdc++.h>
using namespace std;
int main() {
    long long i, n, x, sum = 0;
    cin >> n;
    int aa[n];
    for(i = 0; i < n; i++)
        cin >> aa[i];
    for(i = 0; i < n; i++) {
        cin >> x;
        if(aa[i] - x > 0)
            sum += aa[i] - x;
    }
    cout << sum;
    return 0;
}
