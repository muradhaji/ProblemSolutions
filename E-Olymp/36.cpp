//Link: https://www.e-olymp.com/az/problems/36

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    int tail, head, count = 0;
    
    cin >> head >> tail;
    
    if(tail == 0) {
        if(head % 2) cout << -1;
        else cout << head/2;
        return 0;
    }
    
    if(head == 0) {
        if(tail % 2) {
            tail++;
            count++;
        }
        while(((tail/2)%2)) {
            tail += 2;
            count += 2;
        }
        count += tail/2;
        head += tail/2;
        count += head/2;
        cout << count;
        return 0;
    }
    
    if(tail % 2) {
        tail++;
        count++;
    }
    
    if(head % 2) {
        while(!((tail/2)%2)) {
            tail += 2;
            count += 2;
        }
        count += tail/2;
        head += tail/2;
        count += head/2;
    }
    else {
        while(((tail/2)%2)) {
            tail += 2;
            count += 2;
        }
        count += tail/2;
        head += tail/2;
        count += head/2;
    }
    
    cout << count;

    return 0;
}
