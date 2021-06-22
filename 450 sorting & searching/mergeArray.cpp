// #13 - [https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1#]	

#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int i=n-1; int j = 0;
	    while(j<m && i>-1 && arr1[i] > arr2[j])
	        swap(arr1[i--],arr2[j++]);
	   sort(arr1, arr1+n);
	   sort(arr2,arr2+m);
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    int n; cin >> n;
    int arr1[n];
    for(int i=0; i<n; i++)   cin >> arr1[i];
    
    int m; cin >> m;
    int arr2[m];
    for(int i=0; i<m; i++)   cin >> arr2[i];
    merge(arr1,arr2,n,m);
    for(int i=0; i<n; i++) cout << arr1[i] << " ";
    for(int i=0; i<m; i++) cout << arr2[i] << " ";

}