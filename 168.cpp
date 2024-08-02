#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
  string str = "";
  int n[10000];
  for(int i = 0; i < 10000; i++){
    n[i] = i + 1;
  }
  for(int i = 0; i < 10000; i++){
    str = str + to_string(n[i]);
  }
  int num;
  cin >> num;
  string s = to_string(num);
  size_t found = str.find(s);
  cout << found + 1;
  return 0;
}

