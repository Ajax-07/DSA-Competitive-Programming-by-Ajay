
//.......  find the number of occurence of an element in array...............

#include<bits/stdc++.h>
using namespace std;

int allIndex(int arr[],int size, int key){
    if(size==0)
     return 0;
    
    
    if(arr[0] == key)
     return 1+allIndex(arr+1,size-1,key) ;
     
return allIndex(arr+1,size-1,key);
     
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);

       int n; cin >> n;
       
       int arr[n];
       for(int i=0; i<n; i++){
           cin >> arr[i];
       }
       int key;
       cin >> key;

      cout << allIndex(arr,n,key);
    return 0;   
}