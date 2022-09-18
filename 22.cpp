#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;

void print(vector <int> const& input) {
    for (int i = 0; i < input.size(); i++) {
        cout << input.at(i) << ' ';
    }
}

int main()
{
    long long int n;
    cin >> n;
    vector <int> a;
    while (n > 1) {
        a.push_back(n % 2);
        n = n / 2;
    }
    a.push_back(n);
    int counter = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == 1) {
            counter++;
        }
    }
    cout << counter;
    return 0;
}