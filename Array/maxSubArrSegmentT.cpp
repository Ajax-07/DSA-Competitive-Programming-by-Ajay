
#include<bits/stdc++.h>
using namespace std;

class Solution{
    
public:

    void segmentTree(int* arr , int i, int j, int* tree, int node){
        if(i==j){
            tree[node] = arr[i];
            return;
        }
        
        int mid = i+(j-i)/2;
        int node1 = node*2;
        int node2 = node*2+1;
        
        segmentTree(arr, i,mid,tree, node1); 
        segmentTree(arr,mid+1, j,tree, node2);
        tree[node] = tree[node1]+tree[node2];
        
    }
	int findSubarray(int arr[], int n) {
	    // code here
	    int* tree = new int[2*n];
	    segmentTree(arr, 0,n-1,tree,1);
	    
	    int mxSum=INT_MIN;
	    for(int i=1; i<(2*n); i++){
            // cout << tree[i] << " ";
	        mxSum = max(mxSum, tree[i]);
	    }
	    
	    return mxSum;
	    
	}
};

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin); 
      freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
   
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    } 

   Solution s;
   cout <<  s.findSubarray(arr, n);   

    return 0;
}