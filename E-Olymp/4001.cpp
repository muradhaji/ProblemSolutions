//Link: https://www.e-olymp.com/az/problems/4001

#include <bits/stdc++.h>
using namespace std;

char arr[10][10];
int n, c = 0;

void func(int x, int y) {
  if(arr[x][y] == '*' || x + 1 == n || y + 1 == n || x == 0 || y == 0)
    return;
  c++;
  arr[x][y] = '*';
  func(x - 1, y);
  func(x + 1, y);
  func(x, y - 1);
  func(x, y + 1);
}

int main() {

  int n, x, y, i, j;

  cin >> n;

  for(i = 0 ; i < n ; i++)
    for(j = 0 ; j < n ; j++)
    	cin >> arr[i][j];

  cin >> x >> y;
  
  func(x-1, y-1);

  cout << c;

  return 0;
}
