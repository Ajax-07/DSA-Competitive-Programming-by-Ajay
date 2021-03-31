
//........ find the pair of element which sum up to target sum (pair sum)......
#include<bits/stdc++.h>
using namespace std;

/*
i/p:
2
6
7 6 3 4 -5  2 
2
8
-4 -1 1 3 5 6 8 11
10

o/p:
-5 7
-1 11


TC : O(nlogn)
*/

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);
    
    int test ;
    cin >> test;
    while(test--){
        int n;
    cin >> n ; 
    int arr[n];

    for(int i=0; i<n; i++)
       cin >> arr[i];
  
    int targetSum;
    cin >> targetSum;

    sort(arr,arr+n);

    pair<int,int> res;

    int l=0, r=n-1;
    while(l<r){
        if(arr[l]+arr[r] < targetSum)
        l++;

        else if(arr[l]+arr[r] > targetSum)
             r--;

        else {
              res.first = arr[l];
              res.second = arr[r];
              break;
        }     
    }    
  
  cout << res.first << " " << res.second << endl;
    
    }
   


    return 0;
}