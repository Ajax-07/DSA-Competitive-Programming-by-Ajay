// #2 - [https://practice.geeksforgeeks.org/problems/value-equal-to-index-value1330/1#]
#include<bits/stdc++.h>
using namespace std;

vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int> ans;
	    
	    for(int i=0; i<n; i++){
	        if(arr[i] == i+1)
	           ans.push_back(arr[i]);
	    }
	    return ans;
	}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif
    int n;  cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
       cin >> arr[i];

    vector<int> ans = valueEqualToIndex(arr,n);
    for(int i=0; i<ans.size(); i++)
        cout << ans.at(i) << " ";   

    return 0;    
}