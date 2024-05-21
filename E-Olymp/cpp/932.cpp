//Link: https://www.e-olymp.com/az/problems/932

#include<bits/stdc++.h>
using namespace std;

int main() {
    double S, t, a, b, c, D, x;
    cin >> S >> t;
    a = 1;
    b = t;
    c = -2 * S;
    D = (b * b)- (4 * a * c);
    x = (-b + sqrt(D)) / 2;
    printf("%.2lf", x);
    return 0;
}
