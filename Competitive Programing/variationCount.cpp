// codechef : Variation - [https://www.codechef.com/ZCOPRAC/problems/ZCO15002]

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll fun(ll* arr, int n, ll k){
   
    int count_pair = 0;
    for(int i=0; i<n; i++){
        int start = i+1;
        int end = n;
        int temp_count = 0;

        while(start<end){
            int mid = start + (end-start)/2;

            if(arr[mid]-arr[i] >= k){
                temp_count = n-mid;
                end = mid;
            }else{
                start = mid+1;
            }
        }

        count_pair += temp_count;
    }

    return count_pair;
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif

    int  n;
    ll k;
    cin >> n >> k;

    ll* arr = new ll[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];

    sort(arr, arr+n);

    cout << fun(arr, n, k) << endl;

}