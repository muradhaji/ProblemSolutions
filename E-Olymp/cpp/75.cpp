//Link: https://www.e-olymp.com/az/problems/75

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    int a, m, n = 0, s = 0;
    
    cin >> a >> m;
    
    while(s < m){
        
        if((s+2*a) == m){
            n++;
            break;
        }
        
        s += a;
        a++;
        n++;
    }
    
    cout << n;

    return 0;
}
