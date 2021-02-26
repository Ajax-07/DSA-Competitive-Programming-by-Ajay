//................. check if array is sorted..........

#include<bits/stdc++.h>
using namespace std;

bool checkSorted(int arr[],int n){
    
    if(n==1 || n==0)
      return true;

      if(arr[0]>arr[1])
         return false;

    return checkSorted(arr+1,n-1);
    
}

int main(){
    
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif  

    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    cout << checkSorted(arr,n) << "\n";  

    return 0;
}