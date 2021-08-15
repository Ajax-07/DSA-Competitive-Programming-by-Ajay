#include<bits/stdc++.h>
using namespace std;
int makeIncreasing(int arr[], int n){
    if(n<=1){
        return 0;
    }

    int count=0;

    for(int i=1; i<n; i++){
        if(arr[i] <= arr[i-1]){
            int temp=arr[i-1]-arr[i];
            arr[i] += temp+1;
            count += temp+1;
        }
    }
    return count;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n; 
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    cout << makeIncreasing(arr, n) << endl;    

    for(int i : arr) cout << i << " ";
    return 0;    

}