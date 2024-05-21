//Link: https://www.e-olymp.com/az/problems/2818

#include <bits/stdc++.h>
using namespace std;

int divisor_counter_util(int n, int divisor){
    
    int divisor_counter_n = 0;
    
    while(n != 0){
        
        divisor_counter_n += n/divisor;
        
        n /= divisor;
    }
    
    return divisor_counter_n;
}

int main(int argc, char** argv) {
    
    int n, k, i, j;
    
    cin >> n >> k;
    
    int prime_divisors[50];
    
    for(i = 2, j = 0 ; k!=1 ; i++){
        
        if(k%i == 0){
            
            prime_divisors[j++] = i;
            
            k /= i;
            
            i--;
        }
    }
    
    int greatest_divisor = prime_divisors[j-1];
    
    int divisor_counter_k[greatest_divisor+1] = {0};
    
    for(i = 0 ; i < j ; i++)
        divisor_counter_k[prime_divisors[i]]++;
    
    int min = INT_MAX;

    for(i = 2 ; i <= greatest_divisor ; i++)
        if(divisor_counter_k[i] != 0)
            if(divisor_counter_util(n, i)/divisor_counter_k[i] < min)
                min = divisor_counter_util(n, i)/divisor_counter_k[i];
        
    cout << min;
    
    return 0;
}
/*
 * N! ededinin K say sisteminde qiymetinin sonda gelen 0-larin sayi:
 * 1 - K ededini sade vuruqlara ayiririq
 * 2 - K ededinin ferqli sade vuruqlarinin her birinin sayini tapiriq
 * 3 - K ededindeki sade vuruqlarin uygun sekilde N! ededindeki saylarini tapiriq
 * 4 - N! ededindeki sade vuruqlarin sayilarinin K ededindeki uygun sade 
 *     vuruqlara nisbetini hesablayib aralarinda en kicik olani qebul edirik.
 * 
 * Ornek: N = 10, K = 135
 * 1 - K = 3*3*3*5
 * 2 - say_K(3) = 3, say_K(5) = 1
 * 3 - N! = 1*2*3*(2*2)*5*(2*3)*7*(2*2*2)*(3*3)*(2*5)
 *     buradan aliriq: say_N(3) = 4, say_N(5) = 2
 * 4 - min(say_N(3)/say_K(3), say_N(5)/say_K(5)) = min(4/3, 2/1) = min(1, 2) = 1
 */
 