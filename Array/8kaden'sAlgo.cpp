#include<bits/stdc++.h>
using namespace std;

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
 
       long long  maxSum = 0;
       long long currSum = 0; 
       for(int i=0; i<n; i++){
           currSum = max(arr[i], arr[i]+currSum);
           maxSum = max(maxSum, currSum);
       }

       cout << maxSum << endl;

   }
   return 0;
}