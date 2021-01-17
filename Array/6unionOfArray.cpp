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
       int n,m;
       cin >> n >> m;
       int arr[n];
       int brr[m];

       int max=0;
       for(int i=0; i<n; i++){
           cin >> arr[i];
           if(arr[i]>max)
              max = arr[i];
       }
         for(int i=0; i<m; i++){
           cin >> brr[i];
           if(brr[i]>max)
              max = brr[i];
       }

       int res[max+1]{};

       for(int i=0; i<=max ; i++)
          res[i] = -1;
        
        for(int i=0; i<n; i++)
            res[arr[i]] = arr[i]; 
        
       
        for(int i=0; i<m; i++)
            res[brr[i]] = brr[i]; 

       int count = 0;
       for(int x : res)
          if(x != -1)
            count++;

       cout << count << endl;           
     
    /*
    // 2nd aproach
     set <int> s;
     int x;
      for(int i=0; i<n; i++){
           cin >> x;
           s.insert(x);
       }
         for(int i=0; i<m; i++){
           cin >> x;
           s.insert(x);
       }
       
       cout << s.size();
    */

   }

   return 0;
}