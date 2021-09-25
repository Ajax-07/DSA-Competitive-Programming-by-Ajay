#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int solve(int arr[], int n, int k){
         int dp[k+1][n];
        
        for(int i=0; i<=k; i++){
            for(int j=0;j<n; j++){
                if(i==0 || j==0)
                  dp[i][j] = 0;
                else{
                dp[i][j] = dp[i][j-1];
                    for(int x=j-1; x>=0; x--){
                        int temp = arr[j]-arr[x]+dp[i-1][x];
                        
                        dp[i][j] = max(dp[i][j], temp);
                    }
                      
                }  
            }
        }
        
        
        return dp[k][n-1];
    }
};

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif
    
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    int k ; cin >> k;    

    Solution s;
    cout << s.solve(arr, n, k);    

    return 0;
}
