// #14 - [https://practice.geeksforgeeks.org/problems/zero-sum-subarrays1825/1#]

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 ll findSubarray(vector<ll> arr, int n ) {
        //code here
       unordered_map<ll,ll> m;
       ll prefixSum=0;  ll count=0;
       for(int i=0;i<n; i++){
           prefixSum += arr[i];
           if(prefixSum == 0)
             count++;
           if(m[prefixSum] > 0){
            count+= m[prefixSum];
            m[prefixSum]++;
           }
           else m[prefixSum] = 1; 
       }
       return count;
    }

int main(){
     #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    int n; cin >> n;
    vector<ll> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    cout << findSubarray(arr, n);

    return 0;
}