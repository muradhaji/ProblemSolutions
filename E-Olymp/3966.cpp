//Link: https://www.e-olymp.com/az/problems/3966

#include <bits/stdc++.h>
using namespace std;

int main() {
    long l, r, m, key, i, n, flag;
    cin >> n;
    long a[n];
    for(i = 0; i < n; i++)
        cin >> a[i];
    long k;
    cin >> k;
    long b[k];
    for(i = 0; i < k; i++)
        cin >> b[i];
    for(i = 0; i < k; i++) {
        l = 0; r = n - 1; flag = 0; key = b[i];
        while(l <= r) {
            m = (l + r) / 2;
            if(key == a[m]) {
                flag = 1;
                break;
            }
            else if(key < a[m])
                r = m - 1;
            else
                l = m + 1;
        } 
        if(flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
