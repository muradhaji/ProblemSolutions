//Link: https://www.e-olymp.com/az/problems/9639

#include <bits/stdc++.h>
#define SIZE 100001
using namespace std;

int main(int argc, char** argv) {
    
    long long n, a, b, k, i;
    long long *ab = new long long [SIZE];
    
    memset(ab,0,SIZE);
    
    cin >> n;
    
    while(n != 0){
        
        cin >> a >> b;
        
        if(ab[b] > 0)
            ab[b] += a;
        else
            ab[b] = a;
        
        n--;
    }
    
    cin >> k;
    
    for(i = 1 ; i < SIZE ; i++){
        k -= ab[i];
        if(k <= 0){
            cout << i;
            break;
        }
    }
    
    return 0;
}
