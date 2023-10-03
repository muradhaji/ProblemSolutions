//Link: https://www.e-olymp.com/az/problems/4255

#include <bits/stdc++.h>
using namespace std;

int getMid(int a, int b){ return a + (b - a)/2;}

void updateValueUtil(long long *st, int si, int ei, int i, int diff, int ci){
    
    if(i < si || i > ei)
        return ;
    
    st[ci] = st[ci] + diff;
    
    if(si != ei){

        int mid = getMid(si, ei);
        
        updateValueUtil(st, si, mid, i, diff, ci*2+1);
        
        updateValueUtil(st, mid+1, ei, i, diff, ci*2+2);
    }
}

void updateValue(long long arr[], long long *st, int n, int i, int new_val){
    
    if(i < 0 || i > n-1){
        cout << "Invalid update value.";
        
        return ;
    }
    
    int diff = new_val - arr[i];
    
    arr[i] = new_val;
    
    updateValueUtil(st, 0, n-1, i, diff, 0);
}

long long getSumUtil(long long *st, long long si, int ei, int sq, int eq, int ci){
    
    if(sq <= si && ei <= eq)
        return st[ci];
    
    if(si > eq || ei < sq)
        return 0;
    
    int mid = getMid(si, ei);
    
    return getSumUtil(st, si, mid, sq, eq, ci*2+1) +
            getSumUtil(st, mid+1, ei, sq, eq, ci*2+2);
}

long long getSum(long long *st, int n, int sq, int eq){
    
    if(sq < 0 || eq > n-1 || sq > eq){
        
        cout << "Invalid query value.";
        
        return EXIT_SUCCESS;
    }
    
    return getSumUtil(st, 0, n-1, sq, eq, 0);
}

long long constructSTUtil(long long arr[], int si, int ei, long long *st, int ci){
    
    if(si == ei){
        
        st[ci] = arr[si];
        
        return arr[si];
    }
    
    int mid = getMid(si, ei);
    
    st[ci] = constructSTUtil(arr, si, mid, st, ci*2+1) +
            constructSTUtil(arr, mid+1, ei, st, ci*2+2);
    
    return st[ci];
}

long long *constructST(long long arr[], int n){
    
    long long x = (int)(ceil(log2(n)));
    
    long long max_size = 2*pow(2,x)-1;
    
    long long *st = new long long[max_size];
    
    constructSTUtil(arr, 0, n-1, st, 0);
    
    return st;
}

int main(int argc, char** argv) {
    
    int n, k, a, b;
    char t;
    
    cin >> n >> k;
    n++;
    
    long long arr[n] = {0};
    
    long long *st = constructST(arr, n);

    for(int i=0; i<k; i++){
        
        cin >> t >> a >> b;
        
        if(t == 'A')
            updateValue(arr, st, n, a, b);
            
        else if(t == 'Q')
            cout << getSum(st, n, a, b) << endl;
    }

    return 0;
}
