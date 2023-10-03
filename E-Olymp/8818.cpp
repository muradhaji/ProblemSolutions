//Link: https://www.e-olymp.com/az/problems/8818

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    long int n, result = 9;
    
    cin >> n;
    
    while(n != 1){
        result *= 10;
        n--;
    }
    
    if(result/2 == 4)
        cout << 5;
    else
        cout << result/2;

    return 0;
}
