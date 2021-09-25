#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int solve(int arr[], int n){
        int* profit1 = new int[n];
        int* profit2 = new int[n];
        
        profit1[0] = 0;
        
        int bd = 0;
        int sd = 0;
        
        for(int i=1; i<n; i++){
           if(arr[bd] >= arr[i]){
              bd = sd = i;
            }
            else 
                sd = i;
            
            profit1[i] = max(profit1[i-1], arr[sd] - arr[bd]);    
                
        }
        
        bd = n-1;
        sd = n-1;
        profit2[n-1] = 0;
        
        for(int i=n-2; i>=0; i--){
            if(arr[sd] <= arr[i]){
              bd = sd = i;
            }
            else 
                bd = i;
            
            profit2[i] = max(profit2[i+1], arr[sd] - arr[bd]);    
    
        }
        
        int ans=0;
        
        for(int i=0; i<n; i++)
          ans = max(profit1[i]+profit2[i], ans);
        
        return ans;
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

    Solution s;
    cout << s.solve(arr, n);    

    return 0;
}
