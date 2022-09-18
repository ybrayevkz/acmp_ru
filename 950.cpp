#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;


int main()
{
    string str;
    cin >> str;
    int counter = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '1') {
            cout << char('a' + counter);
            counter = 0;
        }
        else {
            counter = counter + 1;
        }
    }
    return 0;
}