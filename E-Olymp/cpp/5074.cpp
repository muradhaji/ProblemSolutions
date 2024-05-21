//Link: https://www.e-olymp.com/az/problems/5074

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, k, src, dest;
    
    cin >> n >> k;
    
    int vertex[n+1];
    memset(vertex,0,sizeof(vertex));
    
    for(int i = 1 ; i <= k ; i++) {
        cin >> src >> dest;
        vertex[src]++;
        vertex[dest]++;
    }
    
    for(int i = 1 ; i <= n ; i++)
        cout << vertex[i] << endl;
    
    return 0;
}
