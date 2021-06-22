// #21 - [https://www.spoj.com/problems/EKO/]

#include<bits/stdc++.h>
using namespace std;
#define long long int  int;

bool height(int arr[], int n, int H, int mid){ 
    int sum = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > mid)
          sum += arr[i]-mid; 
    }
    return sum>=H;
}
void solve(){
    int n, H;
    cin >> n >> H;
    int arr[n];

    int minh = 0;
    int maxh = INT_MIN ;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        maxh = max(maxh, arr[i]);
    }
    int ans = 0;
    while(minh<=maxh){
        int mid = (maxh+minh)/2;
        if(height(arr,n, H,mid)){
            ans = mid;
            minh = mid+1;
        }
        else maxh = mid-1;
            
   }
   cout << ans;
}

int32_t main(){
    // #ifndef ONLINE_JUDGE
    //    freopen("input.txt", "r",stdin);
    //    freopen("output.txt", "w",stdout);
    // #endif

    solve();  

    return 0;   
}