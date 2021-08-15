

#include<bits/stdc++.h>
using namespace std;

int paintHouse(vector<vector<int>> cost, int n, int m){
    int dp[n][m];
        for(int j=0; j<m; j++)
          dp[0][j] = cost[0][j];
        
        for(int i=1; i<n; i++){
            for(int j=0; j<m; j++){
                int minCost=INT_MAX;
                for(int k=0; k<m; k++)
                  if(k != j)
                   minCost = min(dp[i-1][k], minCost);
                   
                dp[i][j] = cost[i][j]+minCost;
            }
        }
        
        int ans=INT_MAX;
        
        for(int j=0; j<m; j++)
          ans = min(ans, dp[n-1][j]);
        
        return ans;  
}



int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif

    int house, color;
    cin >> house >>  color;

    vector<vector<int>> cost(house, vector<int> (color));

    for(int i=0; i<house; i++){
        for(int j=0; j<color; j++)
           cin >> cost[i][j];
    }


    cout << paintHouse(cost, house, color);

    return 0;
}