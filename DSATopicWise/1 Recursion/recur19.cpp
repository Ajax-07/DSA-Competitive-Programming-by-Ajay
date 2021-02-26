
//......... merege sort ............

#include<bits/stdc++.h>
using namespace std;

void merege(int arr[],int si,int mid, int ei){
    int n1 = mid-si+1;
    int n2 = ei-mid;

    int L[n1], R[n2];

    for(int i=0; i<n1; i++)
       L[i] = arr[si+i];
    for(int i=0; i<n2; i++)
       R[i] = arr[mid+1+i]; 

    int i=0, j=0, k=si;   

    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }      

    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }

     while(j<n2){
        arr[k] = R[j];
        j++;
        k++;
    }

}


void meregeSort(int arr[], int si, int ei ){
    if(si>=ei)
       return ;

    int mid = (si+ei)/2;

    meregeSort(arr,si,mid);
    meregeSort(arr,mid+1,ei);

    merege(arr,si,mid,ei);   
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
    #endif
       freopen("output.txt","w",stdout);
   
    int n; cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

   meregeSort(arr,0,n-1);

   for(int x : arr)
      cout << x << " ";

    cout << endl;       

    return 0;   
}