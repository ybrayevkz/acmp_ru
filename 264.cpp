#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int counter = 0;
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            counter = counter + 1;
        }
        else {
            counter = 0;
        }
        if (counter >= max) {
            max = counter;
        }
        else {
            continue;
        }
    }
    cout << max;

    return 0;
}