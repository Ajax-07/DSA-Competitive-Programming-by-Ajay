// maximum product subarray

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll maxProduct(ll* arr, int n){
    ll maxProduct = 0;
    ll positive = 1;
    ll negative = 1;
   
    for(int i=0; i<n; i++){
        if(arr[i] > 0){
            positive *= arr[i];
            negative = min(negative*arr[i],(ll)1);
        }else if(arr[i] < 0) {
            ll temp = positive;
            positive = max(negative*arr[i],(ll)1);
            negative = arr[i]*temp;
        }else{
            positive = 1;
            negative = 0;
        }

        maxProduct = max(maxProduct, positive);
    }

    return maxProduct;

}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    ll n; cin >> n;

    ll arr[n];
    for(ll i=0; i<n; i++)
        cin >> arr[i];
    
    cout << maxProduct(arr, n) << endl;

    return 0;
}