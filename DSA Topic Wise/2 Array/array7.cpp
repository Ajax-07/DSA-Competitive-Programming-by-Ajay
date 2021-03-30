// ...........  rainwater trapping : TC:O(N) and SC : O(N) ......... 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int waterTrapping(vector<int> &height) {
        int n =  height.size();

        if(n<=2)
         return 0;
        
        int leftMax[n]{0};
        leftMax[0] =  height[0] ;
        int rightMax[n] ;
        rightMax[n-1] = height[n-1];
        
        for(int i=1; i<n; i++)
            leftMax[i] = max(leftMax[i-1],height[i]); 
        
         for(int i=n-2; i>=0; i--)
            rightMax[i] = max(rightMax[i+1],height[i]); 
       
        int trapWater = 0;
         
        for(int i=0; i<n; i++){
            int n = min(rightMax[i],leftMax[i]);
            trapWater += n-height[i];
        }
        return trapWater;
        
    }
};


/*
i/p ------------------->    
3
8
5 2 7 3 6 1 2 4 
6
7 1 5 3 6 4
5
7 6 4 3 1

o/p -------------->
11
7
0


*/

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    
    int test; cin >> test;

    while(test--){
     
     int n; cin >> n; 

    vector<int> height;
    for(int i=0; i<n; i++){
        int x ; cin >> x;
        height.push_back(x);
    }
      
       Solution s;

       cout << s.waterTrapping(height) << endl;
    }
   
    return 0;
}
