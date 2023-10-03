//Link: https://www.e-olymp.com/az/problems/145

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, x, max = 0, say = 0;
    cin >> n;
    int aa[101] = {0};
    for(i = 0; i < n; i++)
    {
        cin >> x;
        aa[x]++;
        if(x > max)
            max = x;
    }
    for(i = 1; i <= max; i++)
        say += aa[i] / 4;
    cout << say;
    return 0;
}
