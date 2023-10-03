//Link: https://www.e-olymp.com/az/problems/87

#include <bits/stdc++.h>
using namespace std;

int main() {
    int c = 0, l = 0, r = 0, count = 1;
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'R') {
            c += 1;
            if (c > r) {
                r += 1;
                count += 1;
            }
        } else if (s[i] == 'L') {
            c -= 1;
            if (c < l) {
                l -= 1;
                count += 1;
            }
        }
    }

    cout << count;

    return 0;
}
