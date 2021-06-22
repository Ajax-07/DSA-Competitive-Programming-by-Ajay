// #19 - [https://www.spoj.com/problems/AGGRCOW/]

#include<bits/stdc++.h>
using namespace std;
#define long long int  int;

bool check(int* arr, int n, int c, int d){
    int i=0; 
    int j=1;
    int count=1;

    while(j<n){
        if(arr[j]-arr[i] >= d){
          count++;
          i=j; j++;
        }else j++;

        if(count == c) return true;
    }

    return false;
}

void solve(){
    int n, c; cin >> n >> c;
    int arr[n]; 
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr,arr+n);

    int res = -1;
    int minD = 0;
    int maxD = arr[n-1] - arr[0];
    while(minD<=maxD){
        int d = minD + (maxD-minD)/2;
        if(check(arr,n,c,d)){
            res=d;
            minD=d+1;
        }else{
            maxD=d-1;
        }
    }

    cout << res << endl;

}

int32_t main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r",stdin);
       freopen("output.txt", "w",stdout);
    #endif

     int tc; cin >> tc;
     while(tc--) solve();      

    return 0;   
}