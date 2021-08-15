#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

int maxArea(int arr[MAX][MAX], int n, int m){

}

int main(){
    #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "r", stdin);
    #endif

    int arr[MAX][MAX] = {
        {0,1,1,0},
        {1,1,1,1},
        {1,1,1,1},
        {1,1,0,0}
    };

    cout << maxArea(arr,4,4); 

}