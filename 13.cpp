#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
  string a;
  string b;
  cin >> a >> b;
  int n = a.size();
  int byk = 0;
  int korova = 0;
  vector<int> byki;
  for(int i = 0; i < n; i++){
    if(a[i] == b[i]){
      byk = byk + 1;
      byki.push_back(i);
    }
    else{
      continue;
    }
  }
  for(int i = 0; i < n; i++){
    if(find(byki.begin(), byki.end(), i) != byki.end()){
      continue;
    }
    else{
      for(int j = 0; j < n; j++){
        if(a[i] == b[j]){
          korova = korova + 1;
        }
        else{
          continue;
        }
      }
    }
  }
  cout << byk << " " << korova;
  
  
  return 0;
}