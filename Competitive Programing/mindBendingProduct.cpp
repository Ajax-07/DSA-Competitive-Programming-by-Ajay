// replace  A[i] element in array with product of all element except A[i] 

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll* productArr(ll* arr, int n){
    ll lp = 1; 
    ll* prod = new ll[n];
     for(ll i=0; i<n; i++){
         prod[i] = lp;
         lp = prod[i]*arr[i];
     }
    ll rp = 1;

     for(ll i=n-1; i>=0; i--){
         prod[i] *= rp;
         rp = rp*arr[i];
     }

    return prod;        
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    ll n; cin >> n;

    ll* arr = new ll[n];
    for(ll i=0; i<n; i++)
        cin >> arr[i];
    
    ll* ans = productArr(arr, n);

    for(ll i=0; i<n; i++)
        cout << ans[i] << " ";

    return 0;
}