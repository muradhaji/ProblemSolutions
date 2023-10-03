//Link: https://www.e-olymp.com/az/problems/1146

#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    
    if(b == 0)
        return a;
    GCD(b,a%b);
}

int main(int argc, char** argv) {
    
    int sol[501] = {0};
    
    int query;
    
    for(int i=1; i<500; i++){
        
        for(int j=i+1; j<=500; j++){
            
            for(int k=j; k<=500; k++)
                sol[k] += GCD(j,i);
        }
    }
    
    while(cin>>query){
        
        if(query == 0)
            return 0;
        
        cout << sol[query] << "\n";
    }
    
    return 0;
}
