#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int solve(int arr[], int n, int fee){
        int bs=-arr[0];
        int ss=0;
        
        for(int i=1; i<n; i++){
            int nbs = max(bs, ss-arr[i]);
            int nss = max(ss, arr[i]+bs-fee);
            
            bs = nbs;
            ss = nss;
        }
        
        return max(ss,bs);
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
    int fee; cin >> fee;

    Solution s;
    cout << s.solve(arr, n, fee);    

    return 0;
}
