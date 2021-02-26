
//......... find duplicate element in a array containing .....................
//........... n+1 natural number having one duplicate ............. 

#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);

       int n; 
       cin >> n;
// ............... we can ignore array..............
       int arr[n];
       int totalSum = 0;
       for(int i=0; i<n; i++){
           cin >> arr[i];
           totalSum+=arr[i];
        }
       
       //....... TC : O(N)..........
        int sum = n*(n-1)/2;
        cout << (totalSum - sum) << endl;
        
        
           
           

       
}