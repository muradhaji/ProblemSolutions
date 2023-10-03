//Link: https://www.e-olymp.com/az/problems/2470

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    
    cin >> n;
    
    int adj[n][n];
    
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < n ; j++)
            cin >> adj[i][j];
    
    for(int i = 0 ; i < n ; i++) {
        if(adj[i][i]) {
            cout << "NO";
            return 0;
        }
        for(int j = 0 ; j < i ; j++) {
            if(adj[i][j] != adj[j][i]) {
                cout << "NO";
                return 0;
            }
        }
    }
    
    cout << "YES";
    
    return 0;
}
