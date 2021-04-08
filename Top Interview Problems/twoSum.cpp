
//  1. link : [ https://leetcode.com/problems/two-sum ]

#include<bits/stdc++.h>
using namespace std;

vector<int> findIndex(int* nums, int n, int target){
     unordered_map<int, int> m;
        
        for(int i=0; i<n; i++)
            m.insert(pair<int,int>(nums[i],i));
        
        vector<int> v(2);
        
        for(int i=0; i<n; i++){
            int x=target-nums[i];
            auto temp = m.find(x);
            if(temp != m.end() && temp->second != i){
                v[0] = i;
                v[1] = temp->second;
                break;
            }
        }
        
        return v;
}

/*
1
6
2 -5 11 7 15 9 
10

3 4
*/

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

        int test;
        cin >> test;

        while(test--){
            int n; 
            cin >> n;
            int arr[n];
            for(int i=0; i<n; i++)
                 cin >> arr[i];

            int target ; cin >> target;

            vector<int> index =  findIndex(arr,n,target);
            cout << index[0] << " " << index[1] << endl;;     
        }


    return 0;    
}