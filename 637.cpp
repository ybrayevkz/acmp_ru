#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int a[10000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;
    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < k) {
            counter = counter + (a[i] % k);
        }
        else {
            counter = counter + k;
        }
    }
    cout << counter;
}