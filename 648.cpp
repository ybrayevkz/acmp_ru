#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
  int n;
  int x;
  cin >> n;
  vector<int> v;
  for(int i = 0; i < n; i++){
    cin >> x;
    v.push_back(x);
  }
  sort(v.begin(), v.end());
  int minhalf = 0;
  for(int i = 0; i < n / 2; i++){
    minhalf = minhalf + v[i];
  }
  reverse(v.begin(), v.end());
  int maxhalf = 0;
  for(int i = 0; i < n / 2; i++){
    maxhalf = maxhalf + v[i];
  }
  cout << maxhalf - minhalf<< endl;
  return 0;
}