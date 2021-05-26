//  codechef : Chef Restaurant - [https://www.codechef.com/submit/CHEFRES]

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fun(pair<ll, ll>* arr, ll n, ll T){
    int start = 0; 
    int end = n;
     
    ll ans = -1; 
    while(start < end){
        ll mid = start + (end-start)/2;

        if(T >= arr[mid].first && T < arr[mid].second){
            ans = 0;
            break;
        }
        if(T >= arr[mid].second){
            start = mid+1;
        }else if(T < arr[mid].first){
            ans = arr[mid].first - T;
            end = mid;
        }
    }

    return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    int test_case;
    cin >> test_case;
    while(test_case--){
        int n,m ;    cin >> n >> m;
        pair<ll,ll>* timeInterval = new pair<ll,ll>[n];
        for(int i=0; i<n; i++){
            ll a,  b;
            cin >> a >> b;
            timeInterval[i] = make_pair(a,b);
        }
       

       sort(timeInterval, timeInterval+n, [&](pair<ll, ll> &a, pair<ll, ll> &b){return a.first < b.first; });

      while(m--){
          ll arrivalTime;   cin >> arrivalTime;
          cout << fun(timeInterval, n , arrivalTime) << endl;
      }

    }


    return 0;
}