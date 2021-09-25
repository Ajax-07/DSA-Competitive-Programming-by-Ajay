#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<int> primeRange(int M, int N) {
        // code here
        bool arr[N+1];
        memset(arr, true, sizeof(arr));
           
        arr[0] = arr[1] = false;
        
        for(int i=2; i*i<=N; i++){
            if(arr[i]){
                for(int j=i*i; j<=N; j+=i)
                    arr[j] = false;
            }
        }
        
        vector<int> v;
        for(int i=M; i<=N; i++){
            if(arr[i])
               v.push_back(i);
        }
        
        return v;
    }
};
