// ...........  Buy Stock n Sell - II : TC:O(N) ......... 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if(prices.size() <= 1)
               return 0;

       int maxprofit = 0;
       for(int i=1; i<prices.size(); i++){
           if(prices[i-1] < prices[i])
                maxprofit += prices[i] - prices[i-1];
       }        

       return maxprofit;
        
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

    vector<int> prices;
    for(int i=0; i<n; i++){
        int x ; cin >> x;
        prices.push_back(x);
    }
      
       Solution s;

       cout << s.maxProfit(prices) << endl;
    }
   
    return 0;
}
