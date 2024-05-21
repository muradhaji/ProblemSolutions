//Link: https://www.e-olymp.com/az/problems/1782

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    unsigned long long n, i;
    long double result = 1;
    
    int *divisors = new int[1001];
    memset(divisors,0,1001);
    
    set <int> unique_divisors;
    
    cin >> n;
    
    for(i = 2 ; i <= n ; i++){
        if(n%i == 0){
            unique_divisors.insert(i);
            n/=i;
            divisors[i]++;
            i--;
        }
    }
    
    for(auto x : unique_divisors)
        result *= (double)(pow(x,(divisors[x]+1))-1)/(double)(x-1);
    
    cout << (unsigned long long)result;

    return 0;
}
