// heap sort using max heap

#include<bits/stdc++.h>
using namespace std;

void up_heapify(int arr[], int index){
    if(index<=0)
       return;
    
    int parent = (index-1)/2;
    if(arr[index] <= arr[parent])
       return;
    
    int temp = arr[index];
    arr[index] = arr[parent];
    arr[parent] = temp;

    up_heapify(arr,parent);

}

void down_heapify(int arr[], int i, int j){
    int leftChild = 2*i+1;
    int rightChild = 2*i+2;

    if((leftChild >= j) || (arr[i] > arr[leftChild] && arr[i] > arr[rightChild]) )
      return;

     if(rightChild <= j){
           if(arr[leftChild] >= arr[rightChild]){
               int temp = arr[i];
               arr[i] = arr[leftChild];
               arr[leftChild] = temp;
               down_heapify(arr,leftChild,j);
           }else{
               int temp = arr[i];
               arr[i] = arr[rightChild];
               arr[rightChild] = temp;
               down_heapify(arr,rightChild,j);
           }
       }else{
               int temp = arr[i];
               arr[i] = arr[leftChild];
               arr[leftChild] = temp;
               down_heapify(arr,leftChild,j);
       }      
}

void heapSort(int arr[], int n){
    
    for(int i=1; i<n; i++)
       up_heapify(arr,i);

    for(int i=n-1; i>0; i--){
       swap(arr[0],arr[i]);
       down_heapify(arr,0,i-1);
    }
          
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    heapSort(arr,n);

    for(auto x : arr)
       cout << x << " ";

}