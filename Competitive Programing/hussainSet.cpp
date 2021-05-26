// codechef : Hussain set - [https://www.codechef.com/problems/COOK82C]
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;



int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    int N,Q;
    cin >> N >> Q;

    ll arr[N];
    for(int i=0; i<N; i++)
       cin >> arr[i];
    sort(arr,arr+N);   
    int countQ = 0;
    int k=N-1;
    queue<ll> q;
    while(Q--){
        int curQ; cin >> curQ;
        ll ans;
       while(countQ<curQ){
            if(k>=0 && (q.empty() || arr[k] >= q.front())){
            ans = arr[k];
            k--;
           }else{
            ans = q.front();
            q.pop();
           }
           q.push(ans/2);
           countQ++;
       }

       cout << ans << endl;
    } 

    return 0;
}