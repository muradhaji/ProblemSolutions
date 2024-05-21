//Link: https://www.e-olymp.com/az/problems/3986

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    
    cin >> n;
    
    int adj[n][n];
    memset(adj,0,sizeof(adj));
    
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            cin >> adj[i][j];
        }
    }
    
    bool source, sink;
    vector<int> sources, sinks;
    
    for(int i = 0 ; i < n ; i++) {
        source = sink = true;
        for(int j = 0 ; j < n ; j++)
            if(adj[i][j]) sink = false;
        for(int j = 0 ; j < n ; j++)
            if(adj[j][i]) source = false;
        if(source && sink) {
            sources.push_back(i+1);
            sinks.push_back(i+1);
        }
        else if(source) sources.push_back(i+1);
        else if(sink) sinks.push_back(i+1);
    }
    
    cout << sources.size() << " ";
    for(int x : sources)
        cout << x << " ";
    cout << endl;
    cout << sinks.size() << " ";
    for(int x : sinks)
        cout << x << " ";
    
    return 0;
}
