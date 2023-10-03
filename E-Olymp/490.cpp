//Link: https://www.e-olymp.com/az/problems/490

#include <bits/stdc++.h>
using namespace std;

int main() {
    string a = "";
    string b = "";
    cin >> a;
    a = "0" + a;
    for(int i = 1; i < a.length(); i++) {
        if(a[i] != a[i - 1])
            b += "1";
        else
            b += "0";
    }
    cout << b;
    return 0;
}
