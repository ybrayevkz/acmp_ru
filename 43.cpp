#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    string s;
    cin >> s;
    int counter = 0;
    int max = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
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
}