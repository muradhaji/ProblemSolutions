//Link: https://www.e-olymp.com/az/problems/5073

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, k, src, dest;
    
    cin >> n >> k;
    
    int adj[n+1][n+1];
    memset(adj,0,sizeof(adj));
    
    for(int i = 0 ; i < k ; i++) {
        cin >> src >> dest;
        adj[src][dest]++;
    }
    
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j <= n ; j++) {
            if(adj[i][j] > 1) {
                cout << "YES";
                return 0;
            }
        }
    }
    
    cout << "NO";
    
    return 0;
}
