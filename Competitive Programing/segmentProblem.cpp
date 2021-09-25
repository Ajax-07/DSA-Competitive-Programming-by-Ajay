#include<bits/stdc++.h>
using namespace std;

void makeSegment(int arr[], int i, int j, int tree[], int idx, int k){
    if(i==j){
        if(arr[i] == k)
          tree[idx] = 1;
        else
          tree[idx] = 0; 

        return;
    }

    int mid = (i+j)/2;

    int idx1 = idx*2;
    int idx2 = idx*2+1;

    makeSegment(arr, i, mid, tree, idx1, k);
    makeSegment(arr, mid+1, j, tree, idx2, k);
    tree[idx] = tree[idx1]+tree[idx2];
}

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin); 
      freopen("output.txt", "w", stdout);
    #endif

    int k = 0;
    int arr[] = {9, 5, 7, 6, 9, 0, 0, 0, 0, 5, 6, 7, 3, 9, 0, 7, 0, 9, 0,1};
    int Q[][3] = {{1, 5, 14 }, {2, 6, 1 }, {1, 0, 8 }, {2, 13, 0 }, {1, 6, 18 } };
     
    int n = sizeof(arr)/sizeof(arr[0]); 
   
    int *tree = new int[2*n];

    makeSegment(arr, 0, n-1, tree,1, k);

    for(int i=1; i<(2*n); i++){
        cout << tree[i] << " ";
    }

    return 0;

}