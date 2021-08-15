// #8 - [https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1#]

#include<bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int n){
   int lastInd=0;
   int count=0;
   for(int i=0; i<n; i++){
       if(arr[i] == arr[lastInd])
           count++;
        else count--;
        
        if(count==0) {
            count=1;
            lastInd = i; 
        }
   }
   count=0;
   for(int i=0; i<n; i++){
       if(arr[i] == arr[lastInd])
           count++;
   }
   
   if(count > n/2)
      return arr[lastInd];
    else return -1;  
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
      cin >> arr[i];

    cout << majorityElement(arr, n);  
    return 0;
}