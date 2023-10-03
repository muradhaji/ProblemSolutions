//Link: https://www.e-olymp.com/az/problems/13

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    
    double a, b, c, x1,y1,x2,y2,z2;
    double temp_x2,temp_y2, dist1, dist2;
    
    cin >> a >> b >> c;
    cin >> x1 >> y1 >> x2 >> y2 >> z2;
    if(z2 == 0)
        printf("%.2f",sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
    else{
        if(x2 == 0 && y2 == 0){
            temp_x2 = x2-z2;
            temp_y2 = y2-z2;
        }
        else if(x2 == b && y2 == a){
            temp_x2 = x2+z2;
            temp_y2 = y2+z2;
        }
        else if(x2 == 0 && y2 == a){
            temp_x2 = x2-z2;
            temp_y2 = y2+z2;
        }
        else if(y2 == 0 && x2 == b){
            temp_x2 = x2+z2;
            temp_y2 = y2-z2;
        }
        else if(x2 == y2){
            temp_x2 = x2+z2;
            temp_y2 = y2+z2;
        }
        else{
            if(x2 == 0)
                x2 -= z2;
            else if(y2 == 0)
                y2 -= z2;
            else{
                if(y2 > x2) y2 += z2;
                if(x2 > y2) x2 += z2;
            }
            dist1 = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
            printf("%.2f",dist1);
            return 0;
        }
        dist1 = sqrt(pow(x2-x1,2)+pow(temp_y2-y1,2));
        dist2 = sqrt(pow(temp_x2-x1,2)+pow(y2-y1,2));
        printf("%.2f",min(dist1,dist2));
    }
    
    return 0;
}
