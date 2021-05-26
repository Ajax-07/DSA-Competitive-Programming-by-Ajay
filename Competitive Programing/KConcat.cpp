// codechef : K-Concatenation - [https://www.codechef.com/problems/KCON]

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll kadenSum(ll* arr, ll n){
    ll curSum = 0;
    ll maxSum = INT_MIN;

    for(int i=0; i<n; i++){
        curSum += arr[i];
        
        maxSum = max(maxSum, curSum);

        if(curSum < 0){
            curSum = 0;
        }
    }

    return maxSum;
}

ll maxSubArraySum(ll* arr, ll n, ll k){
    ll maxKadenSum = kadenSum(arr, n);

    if(k==1){
        return maxKadenSum;
    }

    ll curPrefixSum = 0, curSufixSum = 0;
    ll maxPrefixSum = INT_MIN, maxSufixSum = INT_MIN;
    for(ll i=0; i<n; i++){
        curPrefixSum += arr[i];
        maxPrefixSum = max(curPrefixSum, maxPrefixSum);
    }
    ll  totalSum = curPrefixSum;

     for(ll i=n-1; i>=0; i--){
        curSufixSum += arr[i];
        maxSufixSum = max(curSufixSum, maxSufixSum);
    }

    if(totalSum<0)
        return max(maxKadenSum, maxSufixSum+maxPrefixSum);
    else
        return max(maxPrefixSum+totalSum*(k-2)+maxSufixSum,maxKadenSum); 
     
}

int main(){
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r", stdin);
       freopen("output.txt", "w", stdout);
    #endif

    int test_case;  cin >> test_case;

    while(test_case--){
        ll n,k; cin >> n >> k;

        ll* a = new ll[n];
        for(ll i=0; i<n; i++)
             cin >> a[i];


      cout <<  maxSubArraySum(a,n,k) << endl;     
    //   delete [] a;
    } 

    return 0;        
}
