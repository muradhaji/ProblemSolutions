//Link: https://www.e-olymp.com/az/problems/5321

#include <bits/stdc++.h>
using namespace std;

int main() {
    string a = "";
    cin >> a;
    int i, say = 0, t = 1, sum = 0;
    if(a[0] == '0') {
        for(i = 0; i < a.length(); i++) {
            if(a[i] == '0')
                say++;
            else
                break;
        }
        for(i = a.length()-1; i >= say; i--) {
            if(a[i] == '1')
                sum += t;
            t <<= 1;
        }
        cout << sum;
        return 0;
    }
    else {
        for(i = 0; i < a.length(); i++) {
            if(a[i] == '1')
                say++;
            else
                break;
        }
        for(i = a.length() - 1; i >= say; i--) {
            if(a[i] == '0')
                sum += t;
            t <<= 1;
        }
        cout << ~sum;
        return 0;
    }
    return 0;
}
