//Link: https://www.e-olymp.com/az/problems/7460

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    int n, m, k, res;
    
    cin >> n >> m >> k;
    
    res += n/k;
    res += m/k;
    
    if(n%k > 0)
        res++;
    if(m%k > 0)
        res++;
    
    cout << res;
    
    return 0;
}
