//Link: https://www.e-olymp.com/az/problems/8255

#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
    int summa = 0;
    while(n != 0) {
        summa += n % 10;
        n /= 10;
    }
    return summa;
}

int main() {
    int i, n, s, min, max, flag = 0;
    cin >> n >> s;
    min = pow(10, n - 1);
    max = pow(10, n);
    for(i = min; i < max; i++) {
        if(sum(i) == s) {
            flag = 1;
            cout << i << endl;
        }
        if(flag == 1)
            i += 8;
    }
    return 0;
}
