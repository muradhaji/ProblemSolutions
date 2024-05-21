//Link: https://www.e-olymp.com/az/problems/2472

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, k, operation, src, dest, v;
    
    cin >> n >> k;
    
    vector<vector<int>> adj(n+1);
    
    for(int i = 0 ; i < k ; i++) {
        cin >> operation;
        if(operation == 1) {
            cin >> src >> dest;
            adj[src].push_back(dest);
            adj[dest].push_back(src);
        }
        else {
            cin >> v;
            if(!adj[v].empty()) {
                for(int x : adj[v])
                    cout << x << " ";
                cout << endl;
            }
        }
    }
    
    return 0;
}
