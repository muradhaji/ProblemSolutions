//Link: https://www.e-olymp.com/az/problems/4000

#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, s, i, j, curr, count = 0;
  cin >> n >> s;
  int arr[n][n];
  s--;
  for(i = 0 ; i < n ; i++)
    for(j = 0 ; j < n ; j++)
      cin >> arr[i][j];

  vector<bool> visited(n, false);
  stack<int> stck;
  stck.push(s);
  while(!stck.empty()) {
    curr = stck.top();
    stck.pop();
    if(!visited[curr]) {
      visited[curr] = true;
      count++;
    }
    for(j = 0 ; j < n ; j++) {
      if(arr[curr][j] != 0) {
        if(!visited[j]) {
          stck.push(j);
        }
      }
    }
  }

  cout << count;

  return 0;
}
