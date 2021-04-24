// given two array of weight and value and bag capacity find the maximum value 
//             for wich bag don't exceed the given capacity 

#include<bits/stdc++.h>
using namespace std;
// memoization

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
   
    return 0;   
}