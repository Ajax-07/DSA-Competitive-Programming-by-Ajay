// Find position of an element in a sorted array of infinite numbers : [https://www.geeksforgeeks.org/find-position-element-sorted-array-infinite-numbers/]
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int* arr, int l, int r, int key){
    if(l>=r)
       return -1;

    int mid = l + (r-l)/2;
    
    if(arr[mid] == key)
       return mid;

    else if(key < arr[mid])
        return  binarySearch(arr, l, mid, key);
    else 
       return  binarySearch(arr, mid+1, r, key);    
}

int findPos(int* arr, int key){

    int l = 0; 
    int r = 1;   

    while(key > arr[r]){
        l = r;
        r *=2;
    }
     
    return binarySearch(arr, l, r, key);
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif

    int n; cin >> n;

    int* arr = new int[n];

    for(int i=0; i<n; i++)
       cin >> arr[i];

    int key ; cin >> key;

    int pos = findPos(arr,key) ;
    (pos>-1) ? cout << pos << endl : cout << -1;    

    return 0;
}