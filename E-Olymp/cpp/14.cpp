//Link: https://www.e-olymp.com/az/problems/14

#include <bits/stdc++.h>
using namespace std;

bool is_prime(int p){
    if(p < 2)
        return false;
    if(p < 4)
        return true;
    if(p%2 == 0 || p%3 == 0)
        return false;
    for(int i = 5; i*i <=p ; i += 6)
        if(p%i == 0 || p%(i+2) == 0)
            return false;
    return true;
}

int main(int argc, char** argv) {
    
    int n, number, i = 1;
    
    cin >> n >> number;
    
    if(number == 2){
        cout << 0;
        return 0;
    }
    
    n -= 2;
    
    while(i <= n){
        if(is_prime(number+i+1)){
            cout << i;
            return 0;
        }
        i++;
    }
    
    cout << -1;
    
    return 0;
}
