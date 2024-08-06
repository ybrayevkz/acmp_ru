#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][2];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin >> a[i][j];
        }
    }
    if (n == 1){
        cout << "YES";
    }
    else{
        vector<int> b;
        vector<int> c;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 2; j++){
                if(j == 0){
                    b.push_back(a[i][j]);
                }
                else{
                    c.push_back(a[i][j]);
                }
            }
        }
        sort(b.begin(), b.end());
        reverse(b.begin(), b.end());
        sort(c.begin(), c.end());
        if(b[0] <= c[0]){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    

    return 0;
}