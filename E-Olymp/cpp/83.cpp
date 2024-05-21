//Link: https://www.e-olymp.com/az/problems/83

#include <bits/stdc++.h>
using namespace std;

string reverse(int n, int t) {
    string result = "";
    int qaliq = 0;
    while(n != 0) {
        qaliq = n % t;
        if(qaliq < 10)
            result = (char)(qaliq + 48) + result;
        else
            result = (char)(qaliq + 55) + result;
        n /= t;
    }
    return result;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int flag = 0, i, first = 0, second = 0, third = 0, t;
    string a = "";
    cin >> a;
    for(i = 0; i < a.length(); i++) {
        if(a[i] == '/')
            flag++;
        else {
            if(flag == 0)
                first = first * 10 + (a[i] - 48);
            else if(flag == 1)
                second = second * 10 + (a[i] - 48);
            else
                third = third * 10 + (a[i] - 48);
        }
    }
    cout << reverse(first , first + 1) << "/" << reverse(second, first + 1) << "/" << reverse(third, first + 1);
    return 0;
}
