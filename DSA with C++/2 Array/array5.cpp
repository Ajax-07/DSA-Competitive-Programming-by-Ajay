// ...........  Buy Stock n Sell - I : TC:O(N) ......... 

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if(prices.size() <= 1)
               return 0;
        
        int profit = 0;
        
        int i=0, j = 1; 
        while(i<prices.size() && j<prices.size()){
            int diff = prices[j] - prices[i];
            
            if(diff < 0){
                i = j;
                j++;
            }
            
            else{
                profit = max(profit, diff);
                j++;
            }
        }
        
        return profit;
    }
};


/*
i/p ------------------->    
3
6
7 1 5 3 6 4
5
7 6 4 3 1
3
2 4 1

o/p -------------->
5 
0 
2

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
