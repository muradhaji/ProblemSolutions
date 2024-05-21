//Link: https://www.e-olymp.com/az/problems/8

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {

    int n, root, count = 0, i, temp = 4;
    
    cin >> n;
    
    root = sqrt(n);
    
    for(i = 0 ; i < root ; i++){
        count += temp;
        temp += 4;
    }
    
    n -= root*root;
    
    if(n == 0)
        cout << count;
    else{

        count += 2*n;

        if(n > root)
            count += 2;
        else
            count += 1;

        cout << count;
    }

    return 0;
}
