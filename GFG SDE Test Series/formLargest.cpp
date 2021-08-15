// SDE-1 test 1 : problem 2 : form largest number from all element of array  

#include<bits/stdc++.h>
using namespace std;
string formLargestNum(int* arr, int n){
    string ans="";
    sort(arr, arr+n , [](int &a, int &b){return a>b;});
    for(int i=0; i<n; i++){
        ans += to_string(arr[i]);
    }

    return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int testCase;
    cin >> testCase;
    while(testCase--){
        int n; 
        cin  >> n;
        int arr[n];
        for(int i=0; i<n; i++) cin >> arr[i];

        cout << formLargestNum(arr, n) << endl;
    }
    return 0;
}