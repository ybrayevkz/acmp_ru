#include <iostream>
#include <utility>
#include <vector>
using namespace std;
pair<int, int> findSmallestElement(int arr[], int startPos, int arrLength) {
  int SmallestElement = arr[startPos];
  int indexofsmallest;
  for (int i = startPos; i < arrLength; i++) {
    if (arr[i] <= SmallestElement) {
      SmallestElement = arr[i];
      indexofsmallest = i;
    }
  }
  // return SmallestElement, indexofsmallest;
  return make_pair(SmallestElement, indexofsmallest);
}
int main() {
  int n, s;
  cin >> n >> s;
  vector<int> a;
  for (int i = 0; i < n; i++) {
    int b;
    cin >> b;
    a.push_back(b);
  }
  vector<int> sortedvector;
  for (int i = 0; i < n; i++) {
    int arr[a.size()];
    for (int j = 0; j < a.size(); j++) {
      arr[j] = a[j];
    }
    pair<int, int> smallest = findSmallestElement(arr, 0, a.size());
    int index = smallest.second;
    int smallestElement = smallest.first;
    a.erase(a.begin() + index);
    sortedvector.push_back(smallestElement);
  }
  int sortedarray[sortedvector.size()];
  for (int i = 0; i < sortedvector.size(); i++) {
    sortedarray[i] = sortedvector[i];
  }
  int counter = 0;
  for (int i = 0; i < sortedvector.size(); i++) {
    if (s < sortedarray[i]) {
      break;
    } else {
      s = s - sortedarray[i];
      counter = counter + 1;
    }
  }
  cout << counter;
  // cout << findSmallestElement(a, 0, sizeof(a) / sizeof(int));
  return 0;
}