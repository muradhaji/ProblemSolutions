//Link: https://www.e-olymp.com/az/problems/9636

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    int a, b, res;
    
    cin >> a >> b;
    
    res =  a - 2*b;
    
    if(res < 0)
        cout << 0;
    else
        cout << res;
    
    return 0;
}
