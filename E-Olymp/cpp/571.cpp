//Link: https://www.e-olymp.com/az/problems/571

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    long long int n, i, a, b, r;
    
    cin >> n;
    
    long long int arr[n];
    
    for(i = 0 ; i < n ; i++)
        cin >> arr[i];
    
    a = arr[0];
    
    for(i = 1 ; i < n ; i++){
        
        if(arr[i] > a){
            
            b = a;
            a = arr[i];
        }
        else 
            b = arr[i];
        
        while(a%b != 0){
            
            r = a%b;
            a = b;
            b = r;
        }
        
        a = b;
    }
    
    cout << a;
    
    return 0;
}
