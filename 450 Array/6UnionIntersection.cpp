/*......Find the Union and Intersection of the two sorted arrays......*/

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

       for(int i=0; i<n; i++)
          cin >> arr[i];
        
       for(int i=0; i<m; i++)
          cin >> brr[i];

      sort(arr, arr+n);
      sort(brr, brr+m);

      //..........Union....

      //.... 1st  approach....   

     int countU=0;

      int Max = max(arr[n-1],brr[m-1]);

      int res[Max+1]{};

       for(int i=0; i<=Max ; i++)
          res[i] = -1;
        
        for(int i=0; i<n; i++)
            res[arr[i]] = arr[i]; 
        
       
        for(int i=0; i<m; i++)
            res[brr[i]]=brr[i]; 

       for(int x : res)
            if(x != -1)
             countU++;   

   /*
      //......Or 2nd approach.......

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

     
    /*
   
    
    // ... Or 3rd aproach......   

     int countU=0;
     int i=0, j=0;

    while(i<n || j<m){
      if(arr[i]<brr[j])
        i++;
      else if(arr[i]>brr[j])
         j++; 
      else { i++; j++;} 
      countU++;   
    }
     
    */


    // intersection.........

/*
    int countI=0;
    int i=0, j=0;

    while(i<n || j<m){
      if(arr[i]<brr[j])
        i++;
      else if(arr[i]>brr[j])
        j++;
      else {countI++; i++; j++;}    
    }
    */

     unordered_set<int>s;
    for(int i=0;i<n;i++)
    s.insert(arr[i]);
    int countI=0;
    for(int i=0;i<m;i++)
    {
        if(s.find(brr[i])!=s.end())
         {
             countI++;
             s.erase(brr[i]);
         }
    }

  
    

    cout << countU << " " << countI <<  endl;

   }

   return 0;
}