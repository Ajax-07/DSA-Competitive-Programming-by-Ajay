// find the length of longest subsequence of array
#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

   int n; cin >> n;


   int arr[n];
   unordered_map<int,bool> myMap;
   for(int i=0; i<n; i++){
       cin >> arr[i];
        myMap.insert(pair<int,bool>(arr[i],true));
   }
  
   int maxLength=0;
   for(int i=0; i<n; i++){
       if(myMap.find(arr[i]) != myMap.end() && myMap[arr[i]]){
           int curLen = 1;
           myMap[arr[i]] = false;
           int temp = arr[i]+1;
           while(true){
               if(myMap.find(temp) == myMap.end())
                 break;
              myMap[temp] = false;      
              curLen++; 
              temp++;  
           }
           temp = arr[i]-1;
           while(true){
               if(myMap.find(temp) == myMap.end())
                 break;
               myMap[temp] = false;  
               curLen++;
               temp--;  
           }

           maxLength = max(maxLength,curLen);
       }
   }

   cout << maxLength;

   
    return 0;
}