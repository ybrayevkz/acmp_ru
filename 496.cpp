#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[1000];
    int ear = 0;
    int max = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            ear = a[i] + a[i + 1] + a[n - 1];
        }
        else if (i == n - 1) {
            ear = a[i] + a[i - 1] + a[0];
        }
        else {
            ear = a[i] + a[i - 1] + a[i + 1];
        }
        if (ear >= max) {
            max = ear;
        }
        else {
            continue;
        }
    }
    cout << max;
    return 0;
}