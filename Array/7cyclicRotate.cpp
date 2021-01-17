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
       int n ; cin >> n;
       int arr[n];
       

       for(int i=0; i<n; i++)
           cin >> arr[(1+i)%n];

       for(int x : arr)
         cout << x << " ";

         cout << endl; 

/*
               
 //  ................in case of rotate by Kth index...............
                
                int k ; cin >> k;
                 for(int i=0; i<n; i++)
                  cin >> arr[(k+i)%n];

                  for(int x : arr)
                    cout << x << " " ;

                    cout << endl;

    */
   }
   return 0;
}