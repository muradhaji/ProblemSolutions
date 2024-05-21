//Link: https://www.e-olymp.com/az/problems/994

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    int n, count = 0;
    
    cin >> n;
    
    int adj[n][n];
    int color[n];
    
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < n ; j++)
            cin >> adj[i][j];
    
    for(int i = 0 ; i < n ; i++)
        cin >> color[i];
    
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < n ; j++)
            if(j < i && adj[i][j] && color[i]!=color[j])
                count++;
    
    cout << count;

    return 0;
}
