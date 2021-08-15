// DP - [https://practice.geeksforgeeks.org/problems/friends-pairing-problem5425/1]

#include<bits/stdc++.h>
using namespace std;

class Solution{
long mod = 1000000007;
public:

// DP
int countFriendsPairings3(int n){
    int* ans = new int[n+1];

    for(int i=0; i<=n; i++ ) 
        ans[i] = -1;

    ans[0] = 0;    
    ans[1] = 1;    
    ans[2] = 2; 

    for(int i=3; i<=n; i++){
        ans[i] = (ans[i-1]%mod + (((i-1)%mod)*(ans[i-2]%mod))%mod)%mod;
    } 

    return ans[n];  
}

// memoization
    int countFriendsPairings2(int n, int ans[]){
        if(n==0 || n==1 || n==2){
            ans[n] = n; 
            return ans[n];
        }
        
        if(ans[n] != -1)
          return ans[n];

        int a = countFriendsPairings2(n-1,ans)%mod ;
        int b = (((n-1)%mod)*(countFriendsPairings2(n-2, ans)%mod))%mod;
        ans[n] = (a+b)%mod;
        return ans[n];  
    }
    int countFriendsPairings2(int n){
        int* ans = new int[n+1];

        for(int i=0; i<=n; i++ ) 
             ans[i] = -1;
        
        return countFriendsPairings2(n,ans);
    }

// recursion
    int countFriendsPairings(int n) 
    { 
        // code here
        if(n==0 || n==1 || n==2)
        return n;

         int a = countFriendsPairings(n-1)%mod ;
        int b = (((n-1)%mod)*(countFriendsPairings(n-2)%mod))%mod;
        return  (a+b)%mod;
    
    }


};


int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin); 
      freopen("output.txt", "w", stdout);
    #endif

    int n; 
    cin >> n; 

    Solution s;
    cout << s.countFriendsPairings(n) << endl;
    cout << s.countFriendsPairings2(n) << endl;
    cout << s.countFriendsPairings3(n) << endl;

    return 0;   
}
