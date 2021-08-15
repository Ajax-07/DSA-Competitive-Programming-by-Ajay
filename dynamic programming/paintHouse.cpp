#include<bits/stdc++.h>
using namespace std;

int paintHouse(vector<vector<int>> cost, int n){
    int r = cost[0][0];
    int g = cost[1][0];
    int b = cost[2][0];

    for(int j=1; j<n; j++){
        int nr = min(g, b)+cost[0][j];
        int ng = min(r, b)+cost[1][j];
        int nb = min(r, g)+cost[2][j];

        r = nr;
        g = ng;
        b = nb;
    }


    return min(r,min(g,b));
}



int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    int house;
    cin >> house;

    vector<vector<int>> cost(3, vector<int> (house));

    for(int i=0; i<3; i++){
        for(int j=0; j<house; j++)
           cin >> cost[i][j];
    }


    cout << paintHouse(cost, house);

    return 0;
}