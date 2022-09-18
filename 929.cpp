#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    long long n, sum = 0;
    cin >> n;
    long long temp = n;
    sum += temp / 6 * 1;
    temp %= 6;
    sum += temp / 5 * 2;
    temp %= 5;
    sum += temp / 4 * 3;
    temp %= 4;
    sum += temp / 3 * 4;
    temp %= 3;
    sum += temp / 2 * 5;
    temp %= 2;
    sum += temp * 6;
    cout << sum << " " << n * 6;
    return 0;
}