//Link: https://www.e-olymp.com/az/problems/3982

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, k, dest;
    
    cin >> n;
    
    int adj[n][n];
    
    memset(adj, 0, sizeof(adj));
    
    for(int i = 0 ; i < n ; i++) {
        cin >> k;
        for(int j = 0 ; j < k ; j++) {
            cin >> dest;
            adj[i][dest-1] = 1;
        }
    }
    
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++)
            cout << adj[i][j] << " ";
        cout << endl;
    }

    return 0;
}
