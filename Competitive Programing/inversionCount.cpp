//   GeeksForGeeks : Count Inversions - [https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1#]

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll merge(ll* arr, ll l, ll mid, ll r){
    ll count=0;

    ll n1 = mid-l+1;
    ll n2 = r-mid;
    ll L[n1], R[n2];
    for(ll i=0; i<n1; i++)
         L[i] = arr[l+i];

    for(ll j=0; j<n2; j++)
        R[j] = arr[mid+j+1];

    ll i=0;
    ll j=0;
    ll k=l;

    while(i<n1 && j<n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }else{
            count += n1-i;
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k] = L[i];
        i++, k++;
    }

    while(j<n2){
        arr[k] = R[j];
        j++, k++;
    }
    
    return count;
}


ll fun(ll* arr, ll i, ll j){
    if(i>=j)
      return 0;

    ll mid = i + (j-i)/2;

    ll ans1 = fun(arr, i, mid);
    ll ans2 = fun(arr, mid+1, j);
    ll ans3 = merge(arr,i,mid,j);

    return ans1+ans2+ans3;   
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    int test_case; cin >> test_case;
    while(test_case--){
        ll n; 
        cin >> n; 
        ll* arr = new ll[n];
        for(ll i=0; i<n; i++)
            cin >> arr[i] ;
    

       cout <<  fun(arr,0,n-1) << endl;    
    }

    return 0;
}