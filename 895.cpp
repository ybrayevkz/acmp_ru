#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  char a[3][3];
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      cin >> a[i][j];
    }
  }
  int checker = 0;
  bool flag = false;
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if(a[i][j] == 'X'){
        checker = checker + 1;
      }
    }
    if(checker == 3){
      flag = true;
      break;
    }
    else{
      checker = 0;
    }
  }
  if(flag == true){
    cout << "Win";
  }
  else{
    checker = 0;
    for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
        if(a[j][i] == 'X'){
          checker = checker + 1;
        }
      }
      if(checker == 3){
        flag = true;
        break;
      }
      else{
        checker = 0;
      }
    }
    if(flag == true){
      cout << "Win";
    }
    else{
      
      for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          if(i == j && a[i][j] == 'X'){
            checker = checker + 1;
          }
        }
      }
      if(checker == 3){
        flag = true;
        cout << "Win";
      }
      else{
        checker = 0;
        for(int i = 0; i < 3; i++){
          if (a[i][3-i-1] == 'X'){
            checker = checker + 1;
          }
        }
        if(checker == 3){
          flag = true;
          cout << "Win";
        }
      }
    }
  }
  if(flag == false){
    int checker = 0;
    for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
        if(a[i][j] == 'O'){
          checker = checker + 1;
        }
      }
      if(checker == 3){
        flag = true;
        break;
      }
      else{
        checker = 0;
      }
    }
    if(flag == true){
      cout << "Lose";
    }
    else{
      checker = 0;
      for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          if(a[j][i] == 'O'){
            checker = checker + 1;
          }
        }
        if(checker == 3){
          flag = true;
          break;
        }
        else{
          checker = 0;
        }
      }
      if(flag == true){
        cout << "Lose";
      }
      else{
        for(int i = 0; i < 3; i++){
          for(int j = 0; j < 3; j++){
            if(i == j && a[i][j] == 'O'){
              checker = checker + 1;
            }
          }
        }
        if(checker == 3){
          flag = true;
          cout << "Lose";
        }
        else{
          checker = 0;
          for(int i = 0; i < 3; i++){
            if (a[i][3-i-1] == 'O'){
              checker = checker + 1;
            }
          }
          if(checker == 3){
            flag = true;
            cout << "Lose";
          }
        }
      }
    }
  }
  if(flag == false){
    cout << "Draw";
  }
}