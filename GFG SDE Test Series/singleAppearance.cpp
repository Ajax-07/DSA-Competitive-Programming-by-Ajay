
// SDE-2 test 2 : problem 2 : all element is duplicate except one print unique element from array   


#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin); 
      freopen("output.txt", "w", stdout);
    #endif

    int test;
    cin >> test;
    while(test--){
        int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
      cin >> arr[i];

    int ans=arr[0];
    for(int i=1; i<n; i++)
       ans = ans^arr[i];
    cout << ans << endl;   

    }

    return 0;   
}