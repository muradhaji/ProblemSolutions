//Link: https://www.e-olymp.com/az/problems/9016

#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, r, m, i, n, k, key, flag;
    cin >> n >> k;
    int a[n];
    for(i = 0; i < n; i++)
        cin >> a[i];
    while(cin >> key) {
        l = 0; r = n - 1; flag = 0;
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
