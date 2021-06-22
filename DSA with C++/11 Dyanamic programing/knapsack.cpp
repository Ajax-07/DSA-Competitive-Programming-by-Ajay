// given two array of weight and value and bag capacity find the maximum value 
//             for wich bag don't exceed the given capacity 

#include<bits/stdc++.h>
using namespace std;
// top-down / iterative - DP

int knapsack3(int* wt, int* val, int n, int W){
    int i, w;
    int K[n + 1][W + 1];
 
    // Build table K[][] in bottom up manner
    for(i = 0; i <= n; i++)
    {
        for(w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] +
                                K[i - 1][w - wt[i - 1]],
                                K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
    return K[n][W];

}

// memoization

int knapsack2(int w, int* wt, int* val, int n, int** ans){
        if(w==0||n<0) return 0;
        
        if(ans[n][w] != -1)
          return ans[n][w];
        if(w<wt[n]){
            ans[n][w] = knapsack2(w, wt, val, n-1, ans);
            return ans[n][w];
        }   
        
        int x = knapsack2(w,wt,val,n-1,ans);
        int y = val[n]+knapsack2(w-wt[n],wt,val,n-1,ans);
        
        ans[n][w] = max(x,y);
        return max(x,y);
        
    }
     
     
    int knapsack2(int W, int wt[], int val[], int n) 
    { 
      int** ans = new int*[n];
      for(int i=0; i<n; i++)
      ans[i] = new int[W+1];

      for (int i = 0; i < n; i++)
        for (int j = 0; j<=W ; j++)
          ans[i][j] = -1;  
      return knapsack2(W, wt,val, n-1,ans);    
    
    }

// brute force
int knapsack(int* weight, int* value, int n, int capacity){
    if(n == 0 || capacity == 0)
      return 0;
   
    if(weight[0] > capacity)
          return knapsack(weight+1,value+1,n-1,capacity);  
    

    int x = knapsack(weight+1,value+1,n-1,capacity-weight[0])+value[0];  
    int y = knapsack(weight+1,value+1,n-1,capacity);  

    return max(x,y);
}

/*

5
5 1 8 9 2
4 10 2 3 1
15

17

*/

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif

    int n;
    cin >> n;
    int weight[n];
    int value[n];
    for(int i=0; i<n; i++){
       cin >>  weight[i]; 
    }

    for(int i=0; i<n; i++){
       cin >>  value[i];
    }

    int capacity;
    cin >> capacity;


   cout << knapsack(weight,value,n,capacity) << endl;
   cout << knapsack2(capacity,weight, value,n) << endl;
   cout << knapsack3(weight,value,n,capacity) << endl;
   
    return 0;   
}