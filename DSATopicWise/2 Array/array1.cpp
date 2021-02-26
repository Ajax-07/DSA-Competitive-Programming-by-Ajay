
//........ find the unique element of 2N+1 size array which contain ......
//........         all duplicate element execpt one  ............. 
#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);
    
    int n; cin >> n; 
    int arr[n];

    for(int i=0; i<n; i++)
       cin >> arr[i];
    
    // XOR approach.............. 
    // TC = O(N); N is size of array 
    int x = arr[0]; 
    for(int i=1; i<n; i++ )
        x = x^arr[i];
    cout << x << endl; 

    
    return 0;
}