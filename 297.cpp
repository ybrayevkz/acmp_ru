#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string str;
    cin >> str;
    long long int counter = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '7') {
            continue;
        }
        else if (str[i] == '0' || str[i] == '6' || str[i] == '9') {
            counter++;
        }
        else {
            counter = counter + 2;
        }
    }
    cout << counter;
    return 0;
}