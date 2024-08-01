#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int n, m;
  cin >> n >> m;
  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  int sum = 0;
  sort(arr, arr + n);
  reverse(arr, arr + n);
  for(int i = 0; i < m; i++){
    if(arr[i] >= 0){
      sum = sum + arr[i];
    }
    else{
      sum = sum + 0;
    }
  }
  cout << sum;
  return 0;
}