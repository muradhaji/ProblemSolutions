//Link: https://www.e-olymp.com/az/problems/1614

#include <bits/stdc++.h>
using namespace std;

double teref(int x1, int y1, int x2, int y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

double bucaq(double x, double y, double c) {
    return (x * x + y * y - c * c) / (2 * x * y);
}

int main() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double ab, ac, bc, alfa, betta, qamma, min = 0;
    ab = teref(x1, y1, x2, y2);
    ac = teref(x1, y1, x3, y3);
    bc = teref(x2, y2, x3, y3);
    alfa = bucaq(ac, bc, ab);
    betta = bucaq(ab, bc, ac);
    qamma = bucaq(ab, ac, bc);
    min = alfa;
    if(betta < min)
        min = betta;
    if(qamma < min)
        min = qamma;
    min = (acos(min) * 180) / M_PI;
    printf("%.6lf",min);
    return 0;
}
