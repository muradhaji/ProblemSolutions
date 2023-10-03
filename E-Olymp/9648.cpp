//Link: https://www.e-olymp.com/az/problems/9648

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    int a, b, temp, temp2;
    unsigned long long sum = 0;
    vector<int> buffer;
    
    cin >> a >> b;
    
    for(int i = a ; i <= b ; i++) {
        temp = i;
        temp2 = 0;
        while(temp != 0) {
            buffer.push_back(temp%10);
            temp /= 10;
        }
        sort(buffer.begin(),buffer.end());
        for(auto x : buffer)
            temp2 = temp2*10+x;
        sum += temp2;
        buffer.clear();
    }
    
    cout << sum;

    return 0;
}
