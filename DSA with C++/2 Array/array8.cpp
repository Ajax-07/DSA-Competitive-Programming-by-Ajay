

//........ find the smallest difference of two element in two array ......
#include<bits/stdc++.h>
using namespace std;

/*
i/p:
6 5
-1 5 10 20 28 3
26 134 135 15 17

o/p:
2
28 26
*/

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);
    
    int n,m;
    cin >> n >> m; 
    int arr[n],brr[m];

    for(int i=0; i<n; i++)
       cin >> arr[i];
    for(int i=0; i<m; i++)
       cin >> brr[i];   
    
    sort(arr,arr+n);
    sort(brr,brr+n);
    
    pair<int,int> res;
    
    int i=0, j=0;
    int minDiff = INT_MAX;
    while(i<n && j<m){
       if(minDiff > abs(arr[i] - brr[j])){
           minDiff = abs(arr[i]-brr[j]);
           res.first = arr[i];
           res.second = brr[j];
       }
        if(arr[i] < brr[j])
             i++;
        else if(arr[i]>brr[j])
          j++;
       else{
           break;
       }        
    }

    cout << "Smallest difference :" << minDiff << endl;
    cout << "Smallest difference pair : " << res.first << " " << res.second << endl; 


    return 0;
}