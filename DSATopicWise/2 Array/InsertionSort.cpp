//.............. Insertion Sort O(N^2) ................
//            princple : it has two part of same array one sorted another unsorted
//       it pick the first element of unsorted array and compare with elements of sorted array
//                            and place it at right position 


#include<bits/stdc++.h>
using namespace std;


// function for sort by recursion
void insertionSort1(int arr[], int n){
      if(n<=1)
      return ;

      insertionSort1(arr, n-1);

     int last = arr[n-1];
     int j =n-2;
     while(j>=0 && arr[j] > last){
         arr[j+1] = arr[j];
         j--;
     } 
     arr[j+1] = last;
}

// by iterator .....
void insertionSort2(int arr[], int n){
    if(n<=1)
      return ;

    for(int i=0; i<n; i++){
        int temp = arr[i];

        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }


}


int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);
    
    int test; cin >> test;
    while(test--){
    int n; cin >> n; 
    int arr[n];

    for(int i=0; i<n; i++)
       cin >> arr[i];

    insertionSort1(arr,n);        // recursion
  //insertionSort2(arr,n);        // iterartor

    for(int x : arr)
        cout << x << " ";

     cout << endl;   
    }
    
    return 0;
}