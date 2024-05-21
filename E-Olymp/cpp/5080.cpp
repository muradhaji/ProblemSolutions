//Link: https://www.e-olymp.com/az/problems/5080

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, temp, count = 0;
    
    cin >> n;
    
    int adj[n+1][n+1];
    memset(adj,0,sizeof(adj));
    
    for(int i = 0 ; i < n ; i++) {
        temp = 0;
        for(int j = 0 ; j < n ; j++) {
            cin >> adj[i][j];
            temp += adj[i][j];
        }
        if(temp == 1) count++;
    }
    
    cout << count;
    
    return 0;
}
