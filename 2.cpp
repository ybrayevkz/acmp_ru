#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;


int main()
{
    int n;
    long long int sum = 0;
    cin >> n;
    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            sum = sum + i;
        }
    }
    else if (n == 0) {
        sum = 1;
    }
    else {
        for (int i = 1; i >= n; i--) {
            sum = sum + i;
        }
    }
    cout << sum;
    return 0;
}