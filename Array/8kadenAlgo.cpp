#include<bits/stdc++.h>
using namespace std;

int Max(int a, int b){
    return (a>b) ? a : b;
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
 
       long long  maxSum = arr[0];
       long long currSum = arr[0]; 
       for(int i=1; i<n; i++){
           currSum = Max(arr[i], arr[i]+currSum);
           maxSum = Max(maxSum, currSum);
       }

       cout << maxSum << endl;

   }
   return 0;
}