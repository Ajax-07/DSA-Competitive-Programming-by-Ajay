#include<bits/stdc++.h>
using namespace std;

int merge(int* arr, int l, int mid, int r){
    int ans = 0;

    int n1 = mid-l+1;
    int n2 = r-mid;

    int L[n1], R[n2];
    for(int i=0; i<n1; i++)
        L[i] = arr[l+i];
    for(int j=0; j<n2; j++)
        R[j] = arr[mid+1+j];

    int i=0, j=0, k = l;
    while(i<n1 && j<n2){
        if(L[i] <= R[j]){
            ans += L[i]*(r-j+1);
            arr[k] = L[i];
            i++; 
        }else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }   

    while(i<n1) {
        arr[k] = L[i];
        i++; k++;
    }
    while(j<n2){
        arr[k] = R[j];
        j++; k++;
    } 

    return  ans;   
}

int fun(int* arr, int l, int r){
    if(l>r)
    return 0;

    int mid = l + (r-l)/2;

    int sum1 = fun(arr, l, mid);
    int sum2 = fun(arr, mid+1, r);
    int sum3 = merge(arr, l, mid, r);
    cout << "a";

    return sum1 + sum2 + sum3;    
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif

    int n; cin >> n;

    int* arr = new int[n];
    for(int i=0; i<n; i++)
       cin >> arr[i];

    cout << fun(arr, 0, n-1) << endl;   


    return 0;

}