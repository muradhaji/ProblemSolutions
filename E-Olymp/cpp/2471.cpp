//Link: https://www.e-olymp.com/az/problems/2471

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    int n, edge;
    
    cin >> n;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> edge;
            if(j > i && edge)
                cout << i+1 << " " << j+1 << endl;
        }
    }

    return 0;
}
