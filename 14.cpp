#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int a, b;
  int i = 1;
  cin >> a >> b;
  if(a > b){
    while((i * a) % b != 0){
      i = i + 1;
    }
    cout << i * a;
  }
  else{
    while((i * b) % a != 0){
      i = i + 1;
    }
    cout << i * b;
  }
}