//Link: https://www.e-olymp.com/az/problems/109

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    int m, n = 0, i = 1, q = 1;
    
    cin >> m;
    
    while(m != 0){
        if((m-(9*i*q)) >= 0){
            m -= 9*i*q;
            n += 9*q;
            q *= 10;
            i++;
        }
        else{
            if(m%i == 0)
                n += m/i;
            else
                n = 0;
            m -= m;
        }
    }
    
    cout << n;
    
    return 0;
}
/*
              pages  digits   digits   loops
1    - 9    = 9    = 9x1    = 9      = 9 x 1
10   - 99   = 90   = 90x2   = 180    = 9 x 20
100  - 999  = 900  = 900x3  = 2700   = 9 x 300
1000 - 9999 = 9000 = 9000x4 = 36000  = 9 x 4000
 */
 