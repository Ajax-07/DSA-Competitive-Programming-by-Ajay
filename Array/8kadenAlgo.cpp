// #8 - [https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1]

#include<bits/stdc++.h>
using namespace std;

int Max(int a, int b){
    return (a>b) ? a : b;
}

int kaden(int arr[], int n){
     int currSum = arr[0];
       int maxSum = arr[0]; 
       for(int i=1; i<n; i++){
           currSum += arr[i];
        maxSum = Max(currSum, maxSum);
        if(currSum < 0)
            currSum = 0;
       }

       return maxSum ;
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

   int test ;
   cin >> test;

   while(test--){

       int n; cin >> n;
       int arr[n];
       for(int i=0; i<n;  i++){
           cin >> arr[i];
       }
 
     
       
      //.......kaden algo........
      
       cout << kaden(arr,n) << endl;



        /*
          //...........SECOND APPROACH  (kaden's algo)...........
        
       long long  maxSum = arr[0];
       long long currSum = arr[0]; 
       for(int i=1; i<n; i++){
           currSum = Max(arr[i], arr[i]+currSum);
           maxSum = Max(maxSum, currSum);
       }

       cout << maxSum << endl;
       */

   }
   return 0;
}