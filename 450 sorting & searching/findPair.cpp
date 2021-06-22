// #10 - [https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1#]

#include<bits/stdc++.h>
using namespace std;


bool findPair(int arr[], int size, int n){
    //code
    set<int> s;
    int p=0;
    
    for(int i=0; i<size; i++){
         s.insert(arr[i]);    
    }
    
    for(int i=0; i<size; i++){
        if(s.find(arr[i]+n) != s.end())
            p++;
    }
    
    return p>0;
    
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
    int k; cin >> k;

    cout << findPair(arr, n, k);  

    return 0;
}