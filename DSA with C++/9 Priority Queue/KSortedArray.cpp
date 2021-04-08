
//  k-sorted is a special array in which each element is k-position away from its actual positon
//  sort the k sorted array 

#include<bits/stdc++.h>
using namespace std;


void kSort(int arr[], int n,int k){
    priority_queue<int> pq;

    for(int i=0; i<k; i++){
        pq.push(arr[i]);
    }

   int i=k;
   while(i<n){
        arr[i-k] = pq.top();
        pq.pop();
        pq.push(arr[i]);
        i++;
    }
    

    while(!pq.empty()){
        arr[i-k] = pq.top();
        pq.pop();
        
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

    int k; cin >> k;

    kSort(arr, n, k);

    for(auto x : arr)
       cout << x << " ";

}