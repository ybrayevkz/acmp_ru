#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    int b[m];
    int index;
    string s[n];
    int counter = 0;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        for (int j = 0; j < m; j++) {
            cin >> b[j];
            counter = counter + b[j];
        }
        a[i] = counter;
        counter = 0;
    }
    int min = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] <= min) {
            min = a[i];
            index = i;
        }
        else {
            continue;
        }
    }
    cout << s[index];
}