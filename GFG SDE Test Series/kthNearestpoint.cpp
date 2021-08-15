// SDE-1 test 1 : problem 1 : Kth nearest point  ..................

#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int testCase;
    cin >> testCase;
    while(testCase--){
           int n, i, j, k;
           cin  >> n >> i >> j >> k;
           pair<int,int> arr[n];
           for(int x=0; x<n; x++){
               int a, b;
               cin >> a >> b;
               arr[x] = make_pair(a,b);
           }
           unordered_map<int, pair<int,int>> m;

           for(int x=0; x<n; x++){
               int dist = pow( (arr[x].first-i), 2 ) + pow( (arr[x].second - j), 2  );
               m[dist] = arr[x];
           }

           priority_queue<int> pq;
           int x=0;
           for(auto it : m){
               if(x<k){
                   pq.push(it.first);
               }else{
                   if(it.first < pq.top()){
                       pq.pop();
                       pq.push(it.first);
                   }
               }
               x++;
           }

          while(!pq.empty()){
              cout << m[pq.top()].first << " " << m[pq.top()].second << endl;
              pq.pop();
            }
        }

    return 0;    
}