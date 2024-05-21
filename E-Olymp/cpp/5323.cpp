//Link: https://www.e-olymp.com/az/problems/5323

#include <bits/stdc++.h>
using namespace std;

long long convert10(string a, int n) {
    int i, quvvet = a.length() - 1;
    long long sum = 0;
    for(i = 0; i < a.length(); i++) {
        if(48 <= a[i] && a[i] <= 57)
            sum += (a[i] - 48) * pow(n, quvvet);
        else
            sum += (a[i] - 55) * pow(n, quvvet);
        quvvet--;
    }
    return sum;
}

string reverse(long long a, int k) {
    string result = "";
    int qaliq = 0;
    while(a != 0) {
        qaliq = a % k;
        if(qaliq < 10)
            result = (char)(qaliq + 48) + result;
        else
            result = (char)(qaliq + 55) + result;
        a /= k;
    }
    return result;
}

int main() {
    int n, k;
    string a = "";
    cin >> n >> a >> k;
    cout << reverse(convert10(a,n), k);
    return 0;
}
