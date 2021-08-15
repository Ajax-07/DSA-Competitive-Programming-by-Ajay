// #14 - [https://leetcode.com/problems/next-permutation/submissions/]
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx1=-1;
        int n=nums.size(); 
        for(int i=n-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                idx1 = i;
                break;
            }
        }
        
        if(idx1==-1){
            reverse(nums.begin(), nums.end());
            return;
        }
        
        int idx2 = idx1+1;
        int i=idx1+1, j=n-1;
        while(i<=j){
            int m = (i+j)/2;
            if(nums[m] > nums[idx1]){
                idx2 = m;
                i=m+1;
            }else j=m-1;
        }
        
        swap(nums[idx1], nums[idx2]);
        
        reverse(nums.begin()+idx1+1, nums.end());
        
    }
};


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
     
    int n ; cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];

    Solution s;
    s.nextPermutation(v);

    for(auto &u : v) cout << u << " " ;

    return 0;    
} 