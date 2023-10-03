//Link: https://www.e-olymp.com/az/problems/8661

#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, p, b, faiz, total, say = 1, artim;
    cin >> a >> p >> b;
    faiz = pow((1 + (p / 100)), 7);
    total = a * faiz;
    artim = total - a;
    if(artim >= b) {
        cout << -1;
        return 0;
    }
    while(total >= b) {
        say++;
        total -= b;
        total *= faiz; 
    } 
    cout << say << " ";
    printf("%.2lf", total);
    return 0;
}
