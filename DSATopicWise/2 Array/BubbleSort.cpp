//.............. Bubble sort O(N^2) ................
//            principle : it compare every element with next 
//    and filter out the max element and fix it at last or top of array

#include<bits/stdc++.h>
using namespace std;


// function for sort by recursion
void bubbleSort1(int arr[], int n){
     if(n<=1)
      return ;
    
    for(int i=0; i<n-1; i++)
      if(arr[i+1] < arr[i])
        swap(arr[i+1],arr[i]);
    
    bubbleSort1(arr,n-1);
       
}

// by iterator .....
void bubbleSort2(int arr[], int n){
    if(n<=1)
      return ;

    for(int i=0; i<n-1; i++)
      for(int j=0; j<n-i-1; j++){
          if(arr[j+1] < arr[j])
             swap(arr[j+1],arr[j]);


      }  
}


int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);
   int test;
   cin >> test;
   while(test--){
      
    int n; cin >> n; 
    int arr[n];

    for(int i=0; i<n; i++)
       cin >> arr[i];
    
    bubbleSort1(arr,n);
   // bubbleSort2(arr,n);

    for(int x : arr)
        cout << x << " ";
    cout << endl;    
   }
    
    return 0;
}