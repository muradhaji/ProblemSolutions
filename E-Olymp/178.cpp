//Link: https://www.e-olymp.com/az/problems/178

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    unsigned long long b, c, benefit, amount;
    
    while(1){
        cin >> b >> c;
        if(b == 0 && c == 0)
            break;
        benefit = c-b;
        amount = benefit;
        while(amount <= b)
            amount += benefit;
        cout << amount/benefit << "\n";
    }

    return 0;
}
