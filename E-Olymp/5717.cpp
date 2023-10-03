//Link: https://www.e-olymp.com/az/problems/5717

#include<bits/stdc++.h>
using namespace std;

int main() {
    int i, n, say = 1, max = 1, element;
    cin >> n;
    int a[n];
    for(i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    element = a[0];
    for(i = 0; i < n - 1; i++) {
        if(a[i] == a[i + 1])
            say++;
        else
            say = 1;
        if(say > max) {
            max = say;
            element = a[i];
        }
    }
    cout << element;
    return 0;
}
