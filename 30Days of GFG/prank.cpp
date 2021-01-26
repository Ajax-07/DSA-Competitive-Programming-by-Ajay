
// .................DAY 1.............

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

       for(int i=0; i<n; i++)
         cin >> arr[i];

         int temp[n];
         for(int i=0; i<n; i++)
           temp[i] = arr[i];
         
         for(int i=0; i<n; i++){
             arr[i] = temp[arr[i]];
         }

         for(int X : arr)
           cout << X << " " ;

        cout << endl;
   }

  return 0;
}