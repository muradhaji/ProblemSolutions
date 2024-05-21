//Link: https://www.e-olymp.com/az/problems/4076

#include <bits/stdc++.h>
#define SIZE 100000
using namespace std;

char prime[SIZE];

bool is_prime(long p){
    if(p < 2) return false;
    if(p < 4) return true;
    if(p%2 == 0 || p%3 == 0) return false;
    for(long i = 5 ; i*i <= p ; i += 6)
        if(p%i == 0 || p%(i+2) == 0)
            return false;
    return true;
}

int main(int argc, char** argv) {
    
    long t, a, b, d, beg, j;
    
    cin >> t;
    
    while(t != 0){
        
        memset(prime, 1, SIZE);
        cin >> a >> b;
        
        for(d = 2 ; d*d <= b ; d++){
            beg = (a%d == 0) ? a : ((a/d) + 1)*d;
            if(beg == d) beg += d;
            for(j = beg ; j <= b ; j += d)
                prime[j - a] = 0;
        }
        
        if(a == 1) prime[0] = 0;
        
        for(j = a ; j < b ; j++)
            if(prime[j - a] != 0)
                cout << j << "\n";
        
        if(is_prime(b))
            cout << b << "\n";
        
        cout << "\n";
        t--;
    }

    return 0;
}
