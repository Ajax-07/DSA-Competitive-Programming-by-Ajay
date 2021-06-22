// codechef : [https://www.codechef.com/START4C/problems/QUIZPLAG]

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N,M,K;
    cin >> N >> M >> K;
    int arr[K];
    for(int i=0; i<K; i++){
        cin >> arr[i];
    }

    int temp[N+1] = {};
    for(int i=0; i<K; i++){
        if(arr[i] <= N && arr[i] >= 1)
           temp[arr[i]]++;
    }

    vector<int> res;
    int count=0;
    for(int i=0; i<=N; i++){
        if(temp[i] > 1){
           res.push_back(i);
           count++;
        }
    }

    cout << count << " ";
    for(auto &u : res)
        cout << u << " "; 
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