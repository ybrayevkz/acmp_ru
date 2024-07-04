#include<iostream>
using namespace std;
int main (){
  string a;
  cin >> a;
  int stair = 1;
  int res = 1;
  int arr[a.length() + 1];
  arr[0] = stair;
  for(int i = 0; i < a.length(); i++){
    if(a[i] == '1'){
      stair = stair + 1;
      arr[i + 1] = stair;
    }
    else{
      stair = stair - 1;
      arr[i + 1] = stair;
    }
  }
  for(int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++){
    int j = 0;
    for(j = 0; j < i; j++){
      if(arr[i] == arr[j]){
        break;
      }
    }
    if(i == j){
      res = res + 1;
    }
  }
  cout << res;
  return 0;
}