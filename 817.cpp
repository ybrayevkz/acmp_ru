#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;

int main()
{
    long long int x1, y1, d, k;
    cin >> x1 >> y1 >> d >> k;
    cout << ((x1 * d * k) + (y1 * d * k)) - (d * d * y1 * x1);
    return 0;
}