#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;


int main()
{
    long long int n;
    cin >> n;
    long long int i = n;
    long long int sum = 0;
    while (i != 0) {
        sum = sum + (i % 2);
        i = i / 2;
    }
    cout << n + sum;

    return 0;
}