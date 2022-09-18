#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int b[100];
    int c[100];
    int bcounter = 0;
    int ccounter = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            b[bcounter] = a[i];
            bcounter++;
        }
        else {
            c[ccounter] = a[i];
            ccounter++;
        }
    }
    for (int i = 0; i < ccounter; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < bcounter; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    if (bcounter >= ccounter) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}