#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
  int y = -100;
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  vector<int> result;
  for(int i = y; i <= 100; i++){
    if((a * pow(i, 3) + b * pow(i, 2) + c * i + d) == 0){
      result.push_back(i);
    }
  }
  for(int i = 0; i < result.size(); i++){
    cout << result[i] << " ";
  }
  return 0;
}