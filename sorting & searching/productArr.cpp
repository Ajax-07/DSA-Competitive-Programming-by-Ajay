// #15 - [https://practice.geeksforgeeks.org/problems/product-array-puzzle4525/1#]

#include<bits/stdc++.h>
using namespace std;

vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here
        vector<long long int> res(n);
        long long int lef[n], rig[n];
        lef[0] = 1; rig[n-1] = 1;
        for(int i=1; i<n; i++){
            lef[i] = lef[i-1]*nums[i-1];
        }
        for(int i=n-2; i>-1; i--){
            rig[i] = rig[i+1]*nums[i+1];
        }
        
        for(int i=0; i<n ;i++)
           res[i] = lef[i]*rig[i];
       return res;       
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    int n; cin >> n;
    vector<long long int> nums(n);
    for(int i=0; i<n; i++) cin >> nums[i];

    vector<long long int> res = productExceptSelf(nums, n);
    for(auto &u : res)  cout << u << " ";

    return 0;
}