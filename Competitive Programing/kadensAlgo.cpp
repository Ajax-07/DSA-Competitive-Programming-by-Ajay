// kaden's algorithm

#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    int n; cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int curSum = 0;
    int maxSum = 0;

    for(int i=0; i<n; i++){
        curSum += arr[i];
       
        maxSum = max(curSum,maxSum);

        if(curSum < 0){
            curSum = 0;
        }
        
    }  

    cout << maxSum << endl;  

}