// #9 - [https://www.geeksforgeeks.org/searching-array-adjacent-differ-k/]

#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int k, int key){
    int i=0;
    while(i<n){
        if(arr[i] == key)
          return i;

        i = i+max(1,(abs(arr[i]-key)/k));  
    }

    return -1;
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
    int k, key;
    cin >> k >> key;

    cout << search(arr, n, k, key);  

    return 0;
}