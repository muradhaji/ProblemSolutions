//Link: https://www.e-olymp.com/az/problems/656

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, p = 1, say = 0;
    cin >> n;
    if(n > 1) {
        while(p < n) {
            if(say % 2 == 0)
                p *= 9;
            else
                p *= 2;
            say++;
        }
        if(say % 2 == 1)
            cout << "Stan wins.";
        else
            cout << "Ollie wins.";
    }
    return 0;
}
