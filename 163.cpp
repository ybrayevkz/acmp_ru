#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
  string str;
  cin >> str;
  int x;
  if(str[0] == 'x'){
    if(str[1] == '+'){
      x = stoi(str.substr(4, 1)) - stoi(str.substr(2, 1));
    }
    else{
      x = stoi(str.substr(4, 1)) + stoi(str.substr(2, 1));
    }
  }
  else if (str[2] == 'x'){
    if(str[1] == '-'){
      x = stoi(str.substr(0, 1)) - stoi(str.substr(4, 1));
    }
    else{
      x = stoi(str.substr(4, 1)) - stoi(str.substr(0, 1));
    }
  }
  else if (str[4] == 'x'){
    if(str[1] == '+'){
      x = stoi(str.substr(0, 1)) + stoi(str.substr(2, 1));
    }
    else{
      x = stoi(str.substr(0, 1)) - stoi(str.substr(2, 1));
    }
  }
  cout << x;
  return 0;
}

