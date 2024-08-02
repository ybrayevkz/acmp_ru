#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
  string a = ">>-->";
  string b = "<--<<";
  string c;
  string d;
  cin >> c;
  int counter = 0;
  for(int i = 0; i < c.size(); i++){
    d = c.substr(i, 5);
    if(d == a || d == b){
      counter = counter + 1;
    }
    else{
      continue;
    }
  }
  cout << counter;
  return 0;
  
}