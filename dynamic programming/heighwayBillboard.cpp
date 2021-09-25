#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int solve(int m, int x[], int rev[], int n, int t){
         int dp[n];
        dp[0] =  rev[0];
        
        int ans=0;
        
        for(int i=1; i<n; i++){
            int temp=0;
            for(int j=0; j<i; j++){
                int dist = x[i]-x[j];
                if(dist > t)
                    temp = max(temp, dp[j]);
            }
            
            dp[i] = temp+rev[i];
            ans = max(ans, dp[i]);
           
        }
        
        return ans;
    }
};

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
    #endif
    
    int m; cin >> m;
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    int rev[n];
    for(int i=0; i<n; i++)
      cin >> rev[i];    
    int k ; cin >> k;    

    Solution s;
    cout << s.solve(m,arr, rev, n,k);    

    return 0;
}
