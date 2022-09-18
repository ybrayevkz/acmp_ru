#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int counter = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 1) {
                counter++;
            }
        }
    }
    cout << counter / 2;
    return 0;
}