//Link: https://www.e-olymp.com/az/problems/44

#include <bits/stdc++.h>
#define SIZE 5001
using namespace std;

int arr[SIZE];

bool is_prime(int p){
    
    if(p < 2)
        return false;
    if(p < 4)
        return true;
    if(p%2 == 0 || p%3 == 0)
        return false;
    for(int i = 5 ; i*i <= p ; i += 6)
        if(p%i == 0 || p%(i+2) == 0)
            return false;
    
    return true;
}

int main(int argc, char** argv) {
    
    int i, j, a, n, count = 0;
    
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    
    for(i = 4 ; i < SIZE ; i++){
        
        count = 0;
        a = i;
        
        if(is_prime(a))
            count = arr[a-1]+1;
        else{
            
            j = 2;
            
            while(a != 1){
                if(a%j == 0){
                    count += arr[j];
                    a /= j;
                    j--;
                }
                j++;
            }
        }
        
        arr[i] = count;
        
        for(j = i-count ; j < i ; j++)
            if((arr[j] + (i-j)) < count)
                arr[i] = arr[j] + (i-j);
    }
    
    cin >> n;
    cout << arr[n];
    
    return 0;
}
