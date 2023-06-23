#include<iostream>
#include<algorithm>
using namespace std;
int nod(int a, int b){
  while(a > 0 && b > 0){
    if(a > b){
      a %= b;
    }
    else{
      b %= a;
    }  
  }
  return a + b;  
}
int main(){
  int n;
  cin >> n;
  int counter = 0;
  for(int i = 1; i < n; i++){
    if(nod(i, n) == 1){
      counter = counter + 1;
    }
  }
  cout << counter;
}