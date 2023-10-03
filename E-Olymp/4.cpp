//Link: https://www.e-olymp.com/en/problems/4

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    long double x1,x2,y1,y2,r1,r2, distance, min, max;
    
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    
    distance = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
    
    if(distance == 0){
        if(r1 == r2)
            cout << -1;
        else
            cout << 0;
        return 0;
    }
    
    max = (r1 > r2) ? r1 : r2;
    min = (r1 < r2) ? r1 : r2;
    
    if(distance > (r1 + r2) || (max - distance > min)){
        cout << 0;
        return 0;
    }
    
    if(distance == (r1 + r2) || (max - distance) == min){
        cout << 1;
        return 0;
    }
    
    cout << 2;

    return 0;
}
