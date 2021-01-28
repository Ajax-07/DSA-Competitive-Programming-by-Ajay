// .............DAY 3 ...........


#include<bits/stdc++.h>
using namespace std;

long long smallestpositive(long long arr[], long long n)
    { 
        
        sort(arr, arr+n);
        long long  res = 1;


    for (int i = 0; i < n && arr[i] <= res; i++)
         res = res + arr[i];

     return res;

    } 

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

   int test ;
   cin >> test;

   while(test--){
       long long n;
       cin >> n; 

       long long arr[n];
       for(int i=0; i<n; i++){
           cin >> arr[i];
       }

       cout << smallestpositive(arr,n) << endl;
   }

   return 0;
}