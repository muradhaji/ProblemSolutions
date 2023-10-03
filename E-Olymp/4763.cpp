//Link: https://www.e-olymp.com/az/problems/4763

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, k, src, dest;
    
    cin >> n >> k;
    
    int adj[n][n];
    
    memset(adj, 0, sizeof(adj));
    
    for(int i = 0 ; i < k ; i++) {
        cin >> src >> dest;
        adj[src-1][dest-1] = 1;
        adj[dest-1][src-1] = 1;
    }
    
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++)
            cout << adj[i][j] << " ";
        cout << endl;
    }

    return 0;
}
