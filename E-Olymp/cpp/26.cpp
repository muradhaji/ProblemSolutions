//Link: https://www.e-olymp.com/az/problems/26

#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> a, pair<int,int> b) {
  int minVal = min(min(a.first,a.second),min(b.first,b.second));
  if((minVal == a.first) || minVal == b.second)
    return false;
  return true;
}

int main() {

  vector< pair<int,int> > v;
  int arr[300], a, b, n, i, j, sum = 0;

  cin >> n;
  
  for(i = 0 ; i < n ; i++)
    cin >> arr[i];
  
  for(i = 0 ; i < n ; i++)
    cin >> b , v.push_back(make_pair(arr[i], b));

  for(i = 0 ; i < v.size() ; i++)
    for(j = i + 1 ; j < v.size() ; j++)
      if(comp(v[i],v[j])) swap(v[i],v[j]);

  for(a = i = 0 ; i < v.size() ; i++)
    a += v[i].first , sum = max(a, sum) + v[i].second;

  cout << sum;

  return 0;
}
