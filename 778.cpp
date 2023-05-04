#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
  int a = 31;
  int b;
  int sum = 0;
  for(int i = 0; i < a; i++){
    cin >> b;
    sum = sum + b;
  }
  cout << sum / 27;
  return 0;
}