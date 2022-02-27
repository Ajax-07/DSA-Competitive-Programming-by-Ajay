#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, D;
    cin >> n >> D;
    int arr[n];
    for(int i=0; i<n; i++)
       cin >> arr[i];

    sort(arr, arr+n);

    int cnt=0;
    for(int i=1; i<n; i++){
        if((arr[i]-arr[i-1]) <= D){
            cnt++;
            i++;
        }
    }
    cout << cnt ;   
}