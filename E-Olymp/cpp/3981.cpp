//Link: https://www.e-olymp.com/az/problems/3981

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, edge;
    
    cin >> n;
    
    vector<vector<int>> adj(n);
    
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++){
            cin >> edge;
            if(edge) adj[i].push_back(j);
        }
    }
    
    for(int i = 0 ; i < n ; i++) {
        cout << adj[i].size() << " ";
        for(int j : adj[i])
            cout << j+1 << " ";
        cout << endl;
    }

    return 0;
}
