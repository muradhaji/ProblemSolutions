//Link: https://www.e-olymp.com/az/problems/5320

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, n, flag = 0;
    string st = "";
    cin >> a >> n;
    if(a < 0) {
        flag = 1;
		a = ~a;
    }
    while(n != 0) {
        if(flag == 1) {
            if(a % 2 == 1)
                st = "0" + st;
            else
                st = "1" + st;
        }
        else {
            if(a % 2 == 1)
                st = "1" + st;
            else
                st = "0" + st;
        }
        a >>= 1;
        n--;
    }
    cout << st;
    return 0;
}
