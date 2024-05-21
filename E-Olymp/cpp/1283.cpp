//Link: https://www.e-olymp.com/az/problems/1283

#include <bits/stdc++.h> 
using namespace std;

int count(int coins[], int amount, int n){
    
    int combinations[amount+1] = {0};

    combinations[0] = 1;    
    
    for(int i=0; i < n; i++){
        
        for(int j=1; j <= amount; j++)
            if(j >= coins[i])
                combinations[j] += combinations[j-coins[i]];
    }
    
    return combinations[amount];
}

int main(){ 
    
    ios::sync_with_stdio(0);
    
    cin.tie();
    
    int arr[] = {1, 5, 10, 25, 50}; 
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int amount;
    
    while(cin >> amount)
        cout << count(arr, amount, n) << "\n";
    
    return 0; 
}
