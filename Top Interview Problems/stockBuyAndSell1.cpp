

// 11 . link : [ https://leetcode.com/problems/best-time-to-buy-and-sell-stock ]

#include<bits/stdc++.h>
using namespace std;

// another approach
int maxProfit2(vector<int>& prices){
    int n = prices.size();
    
   int profit = 0;
   int i=0, j=1;
   while(i<n &&  j<n){
       if(prices[i] < prices[j]){
           profit = max( profit ,prices[j] - prices[i]);
           j++;
       }
       else{
           i=j;
           j++;
       }
   }
    return profit;
}


//  Array Preprocessing approach 
 int maxProfit1(vector<int>& prices) {
        int Maximum=0;
        
        int  n=prices.size();
        int temp[n];                  // Array Preprocessing 
        temp[n-1] = prices[n-1];
       for(int i=n-2; i>=0; i--){
            if(temp[i+1]<prices[i])
             temp[i] = prices[i];
           else
               temp[i] = temp[i+1];
        }
        
        for(int i=0; i<n; i++){
         Maximum = max(Maximum,temp[i]-prices[i]);   
        }
        
        return Maximum;
    }

/*
2
6
7 1 5 3 6 4
5
7 6 4 3 1

5
0

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
            vector<int> arr(n);
            for(int i=0; i<n; i++)
                 cin >> arr[i];

           cout << maxProfit1(arr) << endl; 
           cout << maxProfit2(arr) << endl; 
        }


    return 0;    
}