// codechef : [https://www.codechef.com/START4C/problems/CTIME] 

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int N,K,F;
    cin >> N >> K >> F;
    pair<int,int> arr[N];
    for(int i=0; i<N; i++){
        int s,e;
        cin >> s >> e;

        arr[i] = pair<int,int>(s,e);
    }
    sort(arr,arr+N);
    int time=0;
    int maxlast = arr[0].second;
    for(int i=1; i<N; i++){
       time += max(0, (arr[i].first-maxlast));
       maxlast = max(maxlast,arr[i].second);
    }
    
    time += arr[0].first;
    time += F-maxlast;
    if(time >= K)
       cout << "YES";
    else 
      cout << "NO";   
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    int test; cin >> test;
    while(test--){
        solve();
        cout << endl;
    }

    return 0;
}