#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int solve(int arr[], int n){
         int bs=-arr[0];
        int ss=0;
        int csp=0;
        
        for(int i=1; i<n; i++){
            int nbs = max(bs, csp-arr[i]);
            int nss = max(ss, arr[i]+bs);
            int ncsp = max(csp, ss);
            
            bs = nbs;
            ss = nss;
            csp = ncsp;
        }
        
        return max(ss, max(bs,csp));
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
