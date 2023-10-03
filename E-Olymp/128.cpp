//Link: https://www.e-olymp.com/az/problems/128

#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, n, say = 0;
    cin >> n;
    for(i = 1000; i < 1000000; i++)
        if(((i/100000 + i/10000%10 + i/1000%10) == n) && ((i/100%10 + i/10%10 + i%10) == n))
            say++;
    cout << say;
    return 0;
}
