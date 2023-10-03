//Link: https://www.e-olymp.com/az/problems/8817

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    long int n, result = 9;
    
    cin >> n;
    
    while(n != 1){
        result *= 10;
        n--;
    }
    
    cout << result;

    return 0;
}
