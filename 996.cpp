#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> a;
  a.push_back(0);
  a.push_back(1);
  for (int i = 2; i <= n; i++) {
    if (binary_search(a.cbegin(), a.cend(), i)) {
      a.push_back(a.back() + 3);
    } else {
      a.push_back(a.back() + 2);
    }
  }
  cout << a.back() << endl;
  return 0;
}