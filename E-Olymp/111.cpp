//Link: https://www.e-olymp.com/az/problems/111

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, count = 0, strikes;
    cin >> a >> b >> c >> d;
    
    if(b > 0) {
        if(b <= 30)
            count += 1;
        a += 1;
    }
    
    for(int hour = a ; hour <= c ; hour++) {
        strikes = hour % 12;
        if(strikes == 0)
            count += 12;
        else
            count += strikes;
        count += 1;
    }
    
    if(d < 30)
        count -= 1;
    
    cout << count;
    
    return 0;
}
