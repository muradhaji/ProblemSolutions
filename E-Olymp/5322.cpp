//Link: https://www.e-olymp.com/az/problems/5322

#include <bits/stdc++.h>
using namespace std;

int main() {
    string n = "";
    string result = "";
    int i, t = 1, say = 0, sum = 0;
    cin >> n;
    for(i = n.length() - 1; i >= 0; i--) {
        say++;
        if(n[i] == '1')
            sum += t;
        t <<= 1;
        if(say % 4 == 0) {
            if(sum < 10)
                result = (char)(sum + 48) + result;
            else
                result = (char)(sum + 55) + result;
            sum = 0;
            t = 1;
        }
    }
    if(sum != 0)
        result = (char)(sum + 48) + result;
    cout << result;
    return 0;
}
