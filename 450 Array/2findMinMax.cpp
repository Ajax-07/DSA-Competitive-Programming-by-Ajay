// #2 - [https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/]

#include<bits/stdc++.h>
using namespace std;

pair <long,long> minmax(int arr[], int n){
 
 long min=arr[0];
 long max=0;

 for(int i=0; i<n; i++){
     if(arr[i]>max)
       max = arr[i];
    if(arr[i]<min)
      min = arr[i];
 }
 return make_pair(min,max);
}

int main() {

    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout); 
    #endif
    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;

        int arr[n];
        for(int i=0; i<n; i++)
          cin >> arr[i];

        pair <long, long> result = minmax(arr, n);

        cout << result.first << " " << result.second << "\n";

    }
    return 0;
}
