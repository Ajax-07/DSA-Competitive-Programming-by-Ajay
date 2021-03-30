
/*
  find the largest arithmetic aubarray

  arithmatic array : difference btw consecutive element is same
*/

#include<bits/stdc++.h>
using namespace std;

int MAX(int a, int b){
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
       for(int i=0; i<n; i++)
          cin >> arr[i];
     
     int pd = arr[1] - arr[0];
     int res = 2;
     int curr = 2;

     for(int i=2; i<n; i++){
         if(arr[i]-arr[i-1] == pd)
           curr++; 
         else 
         {curr = 2; pd=arr[i]-arr[i-1]; }
         res = MAX(res,curr);  
     }

     cout << res << endl;

   }
   return 0;
}