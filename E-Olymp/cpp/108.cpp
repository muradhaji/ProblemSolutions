//Link: https://www.e-olymp.com/az/problems/108

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    int a, b, c, min, max;
    
    cin >> a >> b >> c;

    if(a > b && a > c){
        if(b > c) min = c;
        else min = b;
        max = a;
    }
    if(b > a && b > c){
        if(a > c) min = c;
        else min = a;
        max = b;
    }
    if(c > a && c > b){
        if(a > b) min = b;
        else min = a;
        max = c;
    }

    cout << (a+b+c)-max-min;

    return 0;
}
