// ternary search 
#include<bits/stdc++.h>
using namespace std;

// recursive
int tSearch(int arr[], int l, int r, int key){
    if(l>r)
       return -1;

    int firstMid = l+(r-l)/3;   
    int secondMid = firstMid+(r-l)/3;

    if(arr[firstMid] == key)
      return firstMid;
    if(arr[secondMid] == key)
        return secondMid;
    if(key < arr[firstMid])
      return tSearch(arr, l, firstMid-1, key);
    else if(key > arr[secondMid])
      return tSearch(arr, secondMid+1, r, key);
    else return tSearch(arr, firstMid, secondMid, key);             
}

int tSearch(int arr[], int n, int key){
   
    int l=0; 
    int r=n-1;
    while(l<=r){
        int firstMid = l + (r-l)/3; 
        int secondMid = firstMid + (r-l)/3;
        if(arr[firstMid] == key)
          return firstMid;
        if(arr[secondMid] == key)
           return secondMid;

        if(key < arr[firstMid])
          r=firstMid-1;
        else if(key > arr[secondMid])
           l=secondMid+1;
        else {l=firstMid; r=secondMid;}           
    }
    return -1;
    

//    return tSearch(arr,0, n-1, key);
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
    int target; cin >> target;
    cout << tSearch(arr, n, target);
    return 0;
}