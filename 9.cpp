#include<iostream>
#include<utility>
using namespace std;
pair<int, int> findminimum(int arr[], int n){
    int min = arr[0];
    int minindex;
    pair<int, int> minpair;
    for(int i=0; i<n; i++){
        if(arr[i]<=min){
            min = arr[i];
            minindex = i;
        }
    }
    minpair.first = min;
    minpair.second = minindex;
    return minpair;
}
pair<int, int> findmaximum(int arr[], int n){
    int max = arr[0];
    int maxindex;
    pair<int, int> maxpair;
    for(int i=0; i<n; i++){
        if(arr[i]>=max){
            max = arr[i];
            maxindex = i;
        }
    }
    maxpair.first = max;
    maxpair.second = maxindex;
    return maxpair;
}

int main(){
  int n;
  cin >> n;
  int a[n];
  int mult = 1;
  int pluscounter = 0;
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }
  for(int i = 0; i < n; i++){
    if(a[i] > 0){
      pluscounter = pluscounter + a[i];
    }
    else{
      continue;
    }
  }
  if(findminimum(a, n).second > findmaximum(a, n).second){
    for(int i = findmaximum(a, n).second + 1;
      i < findminimum(a, n).second; i++){
        mult = mult * a[i];
      }
  }
  else{
    for(int i = findminimum(a, n).second + 1;
      i < findmaximum(a, n).second; i++){
        mult = mult * a[i];
      }
  }
  cout << pluscounter << " " << mult;
}