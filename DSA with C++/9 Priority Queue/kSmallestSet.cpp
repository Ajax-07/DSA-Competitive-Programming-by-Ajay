
//  find a set of k smallest elements of an given array 

#include<bits/stdc++.h>
using namespace std;


int* ksmallestSet(int arr[], int n,int k){
    priority_queue<int> pq;

    for(int i=0; i<k; i++)
       pq.push(arr[i]);

    for(int i=k; i<n; i++){
        if(pq.top() > arr[i]){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    int* res = new int[k];
   
   int i=0;
    while(!pq.empty()){
        res[i] = pq.top();
        pq.pop();
        i++;
    } 

    return res;  

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

   int* res =  ksmallestSet(arr, n, k);

    for(auto x=0; x<k; x++)
       cout << res[x] << " ";

}