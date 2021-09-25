#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	long long getNthUglyNo(int n) {
	    // code here
	    long long dp[n+1];
	   
	   dp[1] = 1;
	   int p2,p3,p5;
	   p2 = p3 = p5 = 1;
	   
	    for(int i=2; i<=n; i++){
	      long long f1 = dp[p2]*2;
	      long long f2 = dp[p3]*3;
	      long long f3 = dp[p5]*5;
	      
	      dp[i] = min(f1,min(f2,f3));
	      
	      if(f1==dp[i])
	          p2++;
	      if(f2==dp[i])
	         p3++;
	      if(f3==dp[i])
	         p5++;      
	        
	    }
	    
	    return dp[n];
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
    cout << s.getNthUglyNo(n);
    return 0;
}