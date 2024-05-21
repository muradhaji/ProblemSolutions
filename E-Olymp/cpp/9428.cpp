//Link: https://www.e-olymp.com/az/problems/9428

#include<bits/stdc++.h>
using namespace std;

int main() {
    string st = "";
    getline(cin, st);
    int i, flag = 0;
    double a = 0, b = 0, c = 0, d = 0, resultab, resultcd;
    for(i = 0; i < st.length(); i++) {
        if(st[i] == '/' || st[i] == 32)
            flag++;
        else {
            if(flag == 0)
                a = a * 10 + (st[i] - 48);
            else if(flag == 1)
                b = b * 10 + (st[i] - 48);
            else if(flag == 2)
                c = c * 10 + (st[i] - 48);
            else if(flag == 3)
                d = d * 10 + (st[i] - 48);
        }
    }
    resultab = a / b;
    resultcd = c / d;
    if(resultab <= resultcd)
        printf("%d/%d %d/%d", int(a), int(b), int(c), int(d));
    else
        printf("%d/%d %d/%d", int(c), int(d), int(a), int(b));
    return 0;
}
