#include<iostream>
#include<cmath>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    string team_name;
    getline(cin, team_name);
    string team[3];
    string ordered_team[3];
    for (int i = 0; i < 3; i++) {
        cin >> team[i];
    }
    cout << team_name << ": ";
    sort(team, team + 3);
    cout << team[0] << ", " << team[1] << ", " << team[2];
}