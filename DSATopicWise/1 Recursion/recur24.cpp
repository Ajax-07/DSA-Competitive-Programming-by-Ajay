
// ........... print all subset of an array ...........

#include<bits/stdc++.h>
using namespace std;

int subsetOfArray(int arr[],int n,output[][]){
    if(n==0){
        output[0][0] = 0;
        return 1;
    }

    subsetOfArray(arr)
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int output[100][n];
    int size = subsetOfArray(arr,n,output);
    
    for(int i=0; i<n; i++)
      for(int j=0; j<n; j++)
           cout << output[i][j] << endl;
    return 0;