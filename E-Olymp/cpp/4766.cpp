//Link: https://www.e-olymp.com/az/problems/4766

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, edge;
    
    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> edge;
            if(edge) cout << i+1 << " " << j+1 << endl;
        }
    }

    return 0;
}
