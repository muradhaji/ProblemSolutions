//Link: https://www.e-olymp.com/az/problems/9540

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, product = 9, factor = 9;
  cin >> n;
  for(int step = 1 ; step < n ; step++) {
    product *= factor;
    factor -= 1;
  }

  cout << product;

  return 0;  
}
