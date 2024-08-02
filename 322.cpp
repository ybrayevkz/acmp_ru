#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
  vector<int> fibo;
  fibo.push_back(0);
  fibo.push_back(1);
  for(int i = 1; i < 25; i++){
    fibo.push_back(fibo[i - 1] + fibo[i]);
  }
  string str;
  cin >> str;
  for(int i = 1; i <= str.length(); i++){
    for(int j = 2; j < fibo.size(); j++){
      if(i == fibo[j]){
        cout << str[i - 1];
        break;
      }
      else{
        continue;
      }
    }
  }
  return 0;
}