// [https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1/]
// dynamic programming
#include<bits/stdc++.h>
using namespace std;

class Solution{   
public:
   
    bool isSubsetSum(int n, int arr[], int sum){
        // code here 
     int** ans = new int*[n+1];
     for(int i=0 ;i<=n; i++){
         ans[i] = new int[sum+1];
     }
     
     for(int i=0; i<=n; i++)
      ans[i][0] = 1;
     for(int j=1; j<=sum; j++)
       ans[0][j] = 0;
      
      for(int i=1; i<=n; i++){
          for(int j=1; j<=sum; j++){
              if(arr[i-1] > j){
                  ans[i][j] = ans[i-1][j];
              }else{
                  ans[i][j] = ans[i-1][j-1] || ans[i-1][j-arr[i-1]];
              }
          }
      }
      
      return ans[n][sum];
      
    }

    bool isSubsetSum2(int n, int arr[], int sum){
        // another space optimized technique 
    
    int** ans = new int*[2];
    ans[0] = new int[sum+1];
    ans[1] = new int[sum+1];
    
    ans[0][0] = 1;
    ans[1][0] = 1;
    
    for(int j=1; j<=sum; j++)
       ans[0][j] = 0;
    
    int flag = 0;
    for(int i=0; i<n; i++){
        for(int j=1; j<=sum; j++){
          if(arr[i] > j)
             ans[flag^1][j] = ans[flag^0][j];
          else
             ans[flag^1][j] = ans[flag^0][j] || ans[flag^0][j-arr[i]];
        }
        flag = flag^1;
    }
    
      return ans[flag][sum];
      
    }


};

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin); 
      freopen("output.txt", "w", stdout);
    #endif

    int n; 
    cin >> n; 

    int arr[n] ;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int targetSum ; 
    cin >> targetSum;
    Solution s;
    cout << s.isSubsetSum(n, arr, targetSum) << endl;
    cout << s.isSubsetSum2(n, arr, targetSum);

    return 0;   
}