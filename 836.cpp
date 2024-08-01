#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool dec_to_oct(int b){
    int ab = 0;
    int array[3];
    while(ab < 3){
        array[ab] = b % 8;
        b = b / 8;
        ab = ab + 1;
    }
    if(array[2] % 2 != 0){
        return true;
    }
    else{
        return false;
    }
}
int main() {
    int n;
    cin >> n;
    int counter = 0;
    int x;
    vector<int> evennum;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x % 2 == 0 && dec_to_oct(x) == true){
            evennum.push_back(x);
            counter = counter + 1;
        }
        else{
            continue;
        }
    }
    sort(evennum.begin(), evennum.end());
    cout << counter << endl;
    for(int i = 0; i < evennum.size(); i++){
        cout << evennum[i] << " ";
    }
    
    return 0;
}
