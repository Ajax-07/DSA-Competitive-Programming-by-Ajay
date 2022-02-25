#include<bits/stdc++.h>
using namespace std;

int findMaxSum(int *arr, int n) {
	    // code here
	int include=0;
	int exclude=0;
    

    for(int i=0; i<n; i++){
        if(i==0){
            include = arr[i];
            exclude = 0;
        }else{
            int temp  = arr[i]+exclude;
            exclude = max(include, exclude);
            include = temp;
        }

    }

    return max(include, exclude);

	}

int main(){

    #ifndef ONLINE_JUGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
    #endif   

    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << findMaxSum(arr, n);

    return 0;
}