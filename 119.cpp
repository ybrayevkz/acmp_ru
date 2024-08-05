#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][3];
    int b[n];
    int temp = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
            if(j == 0){
                temp = temp + (a[i][j] * 3600);    
            }
            else if(j == 1){
                temp = temp + (a[i][j] * 60);
            }
            else{
                temp = temp + a[i][j];
            }
            
        }
        b[i] = temp;
        temp = 0;
    }
    sort(b, b + n);
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            if(j == 0){
                a[i][j] = b[i] / 3600;
                b[i] = b[i] % 3600;
            }
            else if(j == 1){
                a[i][j] = b[i] / 60;
                b[i] = b[i] % 60;
            }
            else{
                a[i][j] = b[i];
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}