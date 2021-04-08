

//  9. link : [ https://leetcode.com/problems/maximum-subarray ]

#include<bits/stdc++.h>
using namespace std;

 int maxSubArray(vector<int>& nums) {
        
        long long  maxSum = nums[0];
        long long currSum = nums[0]; 
    
        int i=1;    
        while(i<nums.size()){
            if(nums[i] < (currSum+nums[i]))
                currSum = (currSum+nums[i]);
            else
                currSum = nums[i];
            
            if(maxSum < currSum)
                maxSum = currSum;
            
            
            i++;
        }
        return maxSum;
    }


/*
2
9
-1 2 -3 4 -1 2 1 -5 4
7
3 9 5 -1 -2 -7 2 


6
17
*/    

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

        int test;
        cin >> test;

        while(test--){
          int n; cin >> n ;

          vector<int> v(n);
          for(int i=0; i<n; i++)
           cin >> v[i];

          cout << maxSubArray(v) << endl;
        }


    return 0;    
}