#include<iostream>
#include<algorithm>
using namespace std;
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}
int main(){
  int a1, b1, c1, a2, b2, c2;
  cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
  int m1[3], m2[3];
  m1[0] = a1;
  m1[1] = b1;
  m1[2] = c1;
  m2[0] = a2;
  m2[1] = b2;
  m2[2] = c2;
  bubbleSort(m1, sizeof(m1) / sizeof(m1[0]));
  bubbleSort(m2, sizeof(m2) / sizeof(m2[0]));
  /*for(int i = 0; i < sizeof(m1) / sizeof(m1[0]); i++){
    cout << m1[i] << " ";
  }
  cout << endl;
  for(int i = 0; i < sizeof(m2) / sizeof(m2[0]); i++){
    cout << m2[i] << " ";
  }*/
  if(m1[0] <= m2[0] && m1[1] <= m2[1] && m1[2] <= m2[2] ||  m1[0] >= m2[0] && m1[1] >= m2[1] && m1[2] >= m2[2]){
    if(m1[0] == m2[0] && m1[1] == m2[1] && m1[2] == m2[2]){
      cout << "Boxes are equal";
    }
    else if(m1[0] < m2[0] || m1[1] < m2[1] || m1[2] < m2[2]){
      cout << "The first box is smaller than the second one";
    }
    else if(m1[0] > m2[0] || m1[1] > m2[1] || m1[2] > m2[2]){
      cout << "The first box is larger than the second one";
    }
  }
  else{
    cout << "Boxes are incomparable";
  }
  
}