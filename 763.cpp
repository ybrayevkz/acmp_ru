#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
  int x, y;
  cin >> x >> y;
  if(x == 1 && y == 1){
    cout << 0;
  }
  else if(x == 1 || y == 1){
    cout << 1;
  }
  else if (x == y && x > 1 && y > 1){
    cout << 2;
  }
  else{
    cout << 1;
  }
}