//Link: https://www.e-olymp.com/az/problems/29

#include <bits/stdc++.h>
using namespace std;

long long is_palindrome(long long n) {
    long long temp = n, reverse = 0;
    while(temp != 0) {
        reverse = (reverse * 10) + temp % 10;
        temp /= 10;
    }
    if(reverse == n)
        return 0;
    else
        return reverse + n;
}

int main() {
    long long m, count = 0;
    cin >> m;
    
    while((m = is_palindrome(m)) != 0)
        count ++;
    
    cout << count;
    
    return 0;
}
