// SPOJ : AGGRCOW - Aggressive cows - [https://www.spoj.com/status/ns=27839114]

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(ll* arr, int n, int cow, ll dis){
    int count=1;
    ll lastPosition = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i]-lastPosition >= dis){
            count++;
            lastPosition = arr[i];
        }

        if(count == cow)
           return true;
    }

    return false;
}

ll ans(ll* arr, int n, int cow){
    ll minD = 0;
    ll maxD = arr[n-1] - arr[0];

    ll ans = -1;

    while(minD<=maxD){
        ll mid = minD + (maxD-minD)/2;

        if(check(arr,n,cow,mid)){
            ans = mid;
            minD = mid+1;
        }else{
            maxD = mid-1;
        }
    }
    return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    int test_case; cin >> test_case;
    while(test_case--){
        int n, cow; 
        cin >> n >> cow;
        ll* position = new ll[n];
        for(int i=0; i<n; i++)
           cin >> position[i] ;
        sort(position,position+n);
        cout << ans(position,n,cow) << endl;   

    }


    return 0;
}