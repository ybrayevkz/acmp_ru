#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    long long int c[50];
    for (int i = n; i > 0; i--) {
        if (i == n) {
            c[i] = a;
            c[i + 1] = b;
        }
        else {
            c[i] = c[i + 2] - c[i + 1];
        }
    }
    cout << c[1] << " " << c[2];
    return 0;
}